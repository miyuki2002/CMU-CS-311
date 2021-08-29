#include<iostream>
using namespace std;

void nhap(int &a, int &b, int &c)
{
    cin>>a>>b>>c;
}

bool kiemtra(int a, int b, int c)
{
    if ((a+b)==c || (a+c)==b || (b+c)==a)   return true;
    else return false;
}

int main()
{
    int a,b,c;
    nhap(a,b,c);
    if (kiemtra(a,b,c)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
