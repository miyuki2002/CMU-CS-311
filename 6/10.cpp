#include <iostream>
using namespace std;

bool isSymmetricalNumbers(int a){
	int m=a;
	int s=0;
	while(a>0){
		s = s*10 + a%10;
		a/= 10;
	}
	if(s == m) return true;
	return false;
}
long long* getSymmetricalNumbers(int a)
{
    long long* arr = new long long[a]; // tao ra bo nho dong luu vao bo nho heap
	int count = 0;
	int i =0;
	while (count < a) {
        if (isSymmetricalNumbers(i)) {
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
    int *pN = new int; // null
    cin>> *pN;
    long long* pArr = getSymmetricalNumbers(*pN);
    display(pArr, *pN);
    return 0;
}