#include<iostream>
using namespace std;
int sumNumbers(int a, int b, int c = 0, int d =0)
{
  return a + b + c + d;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << sumNumbers(a, b) << endl;
    cout << sumNumbers(a, b, c) << endl;
    cout << sumNumbers(a, b, c, d);
    return 0;
}
