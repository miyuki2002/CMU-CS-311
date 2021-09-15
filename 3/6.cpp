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
void insertElement(int arr[], int n, int val)
{
	_____
}

int main()
{
	int arr[9999];
	int n = 0, val = 0;
	cin >> n >> val;
	input(arr, n);
	insertElement(arr, n, val);
	n = n + 1;
	display(arr, n);
	return 0;
}

