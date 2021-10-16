#include <iostream>
using namespace std;
void doSomeThing(int arr[], int n)
{
    arr[0] = 0;
    for (int i = 1; i < n; i++) {
        arr[i] = i + arr[i - 1];
        if (i == 4)
            cout << arr[i];
    }
}
int main()
{
    int arr[5];
    doSomeThing(arr, 5);
    return 0;
}
