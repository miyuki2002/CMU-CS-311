#include<iostream>
using namespace std;
void NhapMang(int a[],int &n)
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
}
int Min(int a[100],int &n)
{
  int Min = a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]<Min)
    {
      Min = a[i];
    }
  }
  return Min;
}
int Max(int a[100],int &n)
{
  int Max=a[0];
  for(int i=1;i<n;i++)
  {
  	if(a[i]>Max)
    {
      Max=a[i];
    }
  }
  return Max;
}
int main()
{
  int a[100];
  int n;
  NhapMang(a,n);
  cout<<Max(a,n)<<" "<<Min(a,n);
  return 0;
}
