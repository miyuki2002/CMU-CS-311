#include <iostream>
#include <cstring>
using namespace std;

long long* getFibonaccis(int a)
{
    long long* arr = new long long[a];
	long long f0 = 0, f1 = 1, fn;
	if (a == 0) {
		// do nothing
	}
	if (a == 1) {
		arr[0] = f0; 
	}
	if (a == 2) {
		arr[0] = f0;
		arr[1] = f1;
	}
	if (a >= 3) {
		arr[0] = f0;
		arr[1] = f1;
		for (int i = 2; i < a; i++)
		{
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
			arr[i] = fn;
		}
	}
	return arr;
    
}
void display(long long* pBrr,int n)
{
    for(int i=0;i<n;i++){
    	cout<<*(pBrr+i);
    	if(i<n-1){
    		cout<<endl;
    	}
    }	
}
int main()
{
    int *pN = new int; // null
    cin>>*pN;
    long long* pArr = getFibonaccis(*pN);
    display(pArr, *pN);
    return 0;
}