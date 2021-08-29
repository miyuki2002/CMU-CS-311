#include<iostream>
using namespace std;

void nhap(char &a)
{
    cin>>a;
}

void test(char a)
{
   cout<<int(a);
}

int main()
{
    char a;
    nhap(a);
    test(a);
    return 0;
}
