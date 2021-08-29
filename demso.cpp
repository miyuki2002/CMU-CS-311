#include<iostream>
using namespace std;

void nhap(int &n)
{
    cin>>n;  //n=101
}

int count(int n)
{
    int k = 0, i ; //k=0, i
    do
    {
        i = n % 10;  // i = 1 /-/ i = 0
        k = k + i; //k = 0 + 1 /-/ k = 0 + 0
        n = n / 10; //n = 10 /-/ n = 1 /-/ n = 0
    }while(n != 0);
    return k;
}

int main()
{
    int n;
    nhap(n);
    cout<<count(n);
    return 0;
}
