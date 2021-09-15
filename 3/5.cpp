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
void sortElements(int arr[], int n)
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
int main()
{
	int arr[100];
	int n = 0;
	cin >> n;
	input(arr, n);
	sortElements(arr, n);
	display(arr, n);
	return 0;
}
