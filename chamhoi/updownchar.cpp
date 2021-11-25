#include<iostream>
#include<string.h>
using namespace std;

void nhap(char &a)
{
    cin>>a;
}

void editer(char a)
{
    if ((a>='A')&&(a<='Z'))
    {
        int s = int (a) + 32;
        cout<<char(s);
    }
         else if ((a>='a')&&(a<='z'))
         {
             int ss = int (a) - 32;
             cout<<char(ss);
         }
            else cout<<a;
}

int main()
{
    char a;
    nhap(a);
    editer(a);
    return 0;
}
