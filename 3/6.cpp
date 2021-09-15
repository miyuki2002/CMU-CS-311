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

void sapxep1(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int flag = arr[i];
                arr[i] = arr[j];
                arr[j] = flag;
            }
        }
    }
}

void insertElement(int arr[], int n, int val)
{
    arr[n - 1] = val;

    sapxep1(arr, n);
}

int main()
{
	int arr[9999];
	int n = 0, val = 0;
	cin >> n >> val;
	input(arr, n);
	n = n + 1;
	insertElement(arr, n, val);
	display(arr, n);
	return 0;
}

