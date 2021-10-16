#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 10;
    cout << *p <<endl;
    int *pArr = new int[5];
    for (int i = 0; i < 5; i++)
        *(pArr + i) = i;
    for (int i = 0; i < 5; i++)
        cout<<pArr[i]<<" ";

    return 0;
}
