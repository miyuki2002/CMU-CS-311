#include <iostream>
using namespace std;
void mySwap(long long *x, long long *y)
{
    long long temp = *x;
  	*x = *y;
  	*y = temp;
}
int main()
{
    long long x, y;
    cin >> x >> y;
    mySwap(&x, &y);
    cout << x << " " << y;
    return 0;
}

