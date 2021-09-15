#include <iostream>
using namespace std;

void isPrime(int a[], int n, int &dem)
{
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
            a[dem++] = i;
        } else {
            i++;
        }
    }
    if (dem == 0) a[dem++] = n;

}

void displayAsPrimes(int n) {
    int dem = 0;
    int a[100];

    isPrime(a, n, dem);

    for (int i = 0; i < dem - 1; i++) {
        cout<<a[i]<<"*";
    }
    cout<<a[dem - 1];
}
int main() {
    int n;
    cin >> n;
    displayAsPrimes(n);
}
