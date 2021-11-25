#include<iostream>
using namespace std;

void nhap(int &n, int a[100])
{
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
}
void cal (int n, int a[100])
{
    int p = n;;
    for (int i=0; i<n; i++)
    {
        p = p * a[i];
    }
    if(p%3!=0) cout<<"NO";
    else cout<<"YES";
}
int main()
{
	int n;
    int a[100];
	nhap(n, a);
	cal(n, a);
    return 0;
}
