#include<iostream>
using namespace std;

void nhap(int &n)
{
    cin>>n;
}

int findfibonacci(int n)
{
    int f0 = 0;
    int f1 = 1;
    int f = 1;
    if (n < 0) return -1;
        else if (n == 0 || n == 1) return n;
            else
            {
                for (int i = 2; i < n; i++) {
                f0 = f1;
                f1 = f;
                f = f0 + f1;
                }
            }
            //else return findfibonacci(n-1) + findfibonacci(n-2);
            return f;
}

int main()
{
    int n;
    nhap(n);
    cout<<findfibonacci(n-1);
    return 0;
}
