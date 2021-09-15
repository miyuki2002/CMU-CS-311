#include<iostream>
using namespace std;
void display(unsigned long arr[],int n)
{
    for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";
}
int countDigits(unsigned long n)
{
    int asd = 0, tong = 1;
    int arr[10000];

    while(n!=0){
        arr[asd]=n%10;
        asd++;
        n=n/10;
	}
    int bruh[asd];
    bruh[0]=arr[0];

    for(int i=1;i<asd;i++){
        int dem=0;
        for(int j=0;j<tong;j++){
            if(arr[i]==bruh[j])
                dem++;
        }
        if(dem==0){
            bruh[tong]=arr[i];
            tong++;
        }
    }
    cout<<tong;
}

int main()
{
    unsigned long n = 0;
    cin >> n;
    countDigits(n);
    return 0;
}
