#include<iostream>
using namespace std;

void nhap(int a[100],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int Count(int a[100],int &n)
{
	int s=0;
	for(int i=0;i<n;i++)
		if(a[i]==a[i+1]-1)
			s++;
	return s;
}
int main()
{
	int a[100];
	int n;
	nhap(a,n);
	cout<<Count(a,n);
}
