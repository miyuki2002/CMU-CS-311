#include <iostream>
using namespace std;
void inputMatrix(int arr[][100], int m, int n)
{
    for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
         cin>>arr[i][j];

}
void displayMatrix(int arr[][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<arr[i][j];
            if(j < n - 1) cout<<" ";
        }

        if(i < m - 1) cout<<endl;
    }


}

void transfer(int arr[][100], int m, int n, int a[], int &asd)
{
    asd = m*n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i*n + j] = arr[i][j];
}

void sapxep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int flag = a[i];
                a[i] = a[j];
                a[j] = flag;
            }
}
void sortMatrix(int arr[][100], int m, int n)
{
    int a[100];
    int asd;
    transfer(arr,m,n,a,asd);
    sapxep(a,asd);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = a[i*n+j];

}
int main()
{
    int m, n;
    int arr[100][100];
    cin >> m >> n;
    inputMatrix(arr, m, n);
    sortMatrix(arr, m, n);
    displayMatrix(arr, m, n);
    return 0;
}
