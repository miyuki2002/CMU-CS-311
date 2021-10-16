#include <iostream>
using namespace std;

void mySwap(int &x, int &y)
{
    int flag = a;
    a = b;
    b = flag;
}
int main() {
    int a = 1, b = 2;
    mySwap(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    return 0;
}
