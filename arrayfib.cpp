#include <iostream>
using namespace std;

int nhap(int &n)
{
    cin>>n;
}

void array1(int n, long long f[])
{
        f[0] = 0;
        f[1] = 1;
        for(int i = 2; i < 999; i++)
                f[i] = f[i-1] + f[i-2];
}

int main()
{
    int n;
    long long f[999];
    nhap(n);
    array1(n, f);
    cout<<f[n-1];
    return 0;
}
