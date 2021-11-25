#include<iostream>
using namespace std;

void nhap(int &n)
{
    cin>>n;
}

int findfibonacci(int n)
{
    if (n <= 1) return 0;
        else
        {
            int a = 0;
            int b = 1;
            int flag = 0;
            for (int i = 0; i<n; i++) {
                if (i <= 1)
                    flag = i;
                else
                {
                    flag = a + b;
                    a = b;
                    b = flag;
                }
            }
            return flag;
        }
            //else return findfibonacci(n-1) + findfibonacci(n-2);
}

int main()
{
    int n;
    nhap(n);
    cout<<findfibonacci(n);
    return 0;
}
