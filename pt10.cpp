#include<iostream>
using namespace std;

void nhap(int &n, int a[100])
{
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
}

bool cal (int n, int a[100])
{
    for (int i=0; i<n; i++)
    {
        if((n*a[i])%3==0) return true;
        else return false;
    }
}
int main()
{
	int n;
    int a[100];
	nhap(n, a);
	if (cal(n, a)) cout<<"YES";
	else cout<<"NO";
    return 0;
}
