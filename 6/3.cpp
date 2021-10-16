#include <iostream>
#include <string>
using namespace std;
void input(string *a)
{
    getline(cin,*a);
}
int main()
{
    string s;
    input(&s);
    cout << s;
    return 0;
}
