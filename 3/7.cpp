#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
     	cin>>arr[i];
}

void display(int arr[], int n)
{
	for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
                if(i < n-1) cout<<" ";
        }
}
bool isPrimes(int x){
	if(x<=1) return false;
	for(int i=2;i<x;i++)
    	if(x%i==0) return false;
  	return true;
}
void Delete(int arr[], int vt, int &n){
	for(int i=vt;i<n-1;i++)
    	arr[i]=arr[i+1];
	n--;
}
int removePrimes(int arr[], int n)
{
	int dem=0;
    for(int i=0;i<n;i++){
		if(isPrimes(arr[i])){
			Delete(arr,i,n);
			i--;
          	dem++;}
	}
	return dem;
}

int main()
{
	int arr[10000];
	int n = 0;
	cin >> n;
	input(arr, n);
	int removedPrimes = removePrimes(arr, n);
	n = n - removedPrimes;
	display(arr, n);
	return 0;
}
