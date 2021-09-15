#include<iostream>
using namespace std; //tim so doi xung trong mang
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin>>arr[i];
}
// Display sysmmetrical numbers from an array
int dn(int n) {
    int i = 0;
    while (n > 0) {
        i = i * 10 + n % 10;
        n = n/10;
    }
    return i;
}
bool check(int n) {
    if (n == dn(n))
        return true;
    return false;
}


void displaySymmetricalNumbers(int arr[], int n)
{
    int aaa = 0;
    for (int i = 0; i < n; i++) if (check(arr[i])) aaa += 1;
    cout<<aaa<<endl;
    for (int i = 0; i < n; i++)
        if (check(arr[i]))
        {
            cout<<arr[i];
                if(i < n-1) cout<<" ";
        }

}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    input(arr, n);
    displaySymmetricalNumbers(arr, n);
    return 0;
}

