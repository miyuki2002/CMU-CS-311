#include <iostream>
#include <cstring>
using namespace std;

long long* inputArr(int pN)
{
    long long* arr = new long long[pN];
    for(int i=0;i<pN;i++)
    	cin>>*(arr+i); //arr[i]
    return arr; // Tra ve dia chi cua arr vi ham input dung con tro	
}  
void display(long long* pBrr, int pN)
{
    for(int i=0;i<pN;i++){
    	cout<<*(pBrr+i);
    	if (i<pN-1){
        	cout << " ";
        }    
	}	
}
int main()
{
    int *pN = new int; // null
    cin>> *pN;
    long long* pArr = inputArr(*pN);
    display(pArr, *pN);
    return 0;
}