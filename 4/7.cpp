#include <iostream>
using namespace std;
void xoa(char a[1000],int n,int x){
        for(int i=x+1;i<n;i++){
            a[i-1]=a[i];
        }
        a[n-1]='\0';

}
void iFormatStr(char a[1000]){
    int j=0;
    int n=0,i=0;
    while(a[i]!='\0'){
        n++;
        i++;
    }
     while(a[j]!='\0'){
        if(a[j]==a[j+1]){
            xoa(a,n,j);
            j--;
        }
        j++;
    }
    cout<<a;
}
int main()
{
    char a[1000];
    cin.getline(a,1000);
    iFormatStr(a);
    return 0;
}
