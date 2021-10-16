#include <iostream>
#include<math.h>
using namespace std;

bool isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return false;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
long long* getPrimes(int n)
{
    long long* arr = new long long[n]; // tao ra bo nho dong luu vao bo nho heap
	int count = 0;
	int i =2;
	while (count < n) {
        if (isPrimeNumber(i)) {
            arr[count] = i; 
			count++;
        }
        i++;
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
    int* pN = new int;
    cin>>*pN;
    long long* pArr = getPrimes(*pN);
    display(pArr, *pN);
    return 0;
}