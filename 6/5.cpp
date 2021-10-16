#include <iostream>
using namespace std;

void input(long long* p, int* n)
{
    for(int i=0;i<*n;i++){
    	cin>>*(p+i);
    }    
}
void display(long long* p, int* n)
{
    for(int i=0;i<*n;i++){
    	cout<<*(p+i)<<" ";
    }    
}
long long* minValue(long long* p, int* n)
{
   	long long* min = &p[0];
   	for(int i=0;i<*n;i++){
   		if(*min>*(p+i))
   			min=(p+i);
   	}
   	return min;
}

int main()
{
    long long arr[1000];
    int n;
    cin>>n;
    input(arr, &n);
    long long* pMin = minValue(arr, &n);
	*pMin = 0;
    display(arr, &n);
    return 0;
}