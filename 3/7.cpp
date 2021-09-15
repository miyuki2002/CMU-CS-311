#include <iostream>
using namespace std;

void input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
        cin>>arr[i];
}
void display(int arr[], int n)
{
	for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
                if(i < n-1) cout<<" ";
        }
}

_____ removePrimes(_____)
{
    _____
}

int main()
{
	int arr[9999];
	int n = 0;
	cin >> n;
	input(arr, n);
	int removedPrimes = removePrimes(arr, n);
	n = n - removedPrimes;
	display(arr, n);
	return 0;
}


