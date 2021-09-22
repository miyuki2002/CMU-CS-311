#include <iostream>
using namespace std;

void nhap(int n, string line[])
{
    cin.ignore(25565,'\n');
  	for (int i = 0; i < n; i++)
        getline(cin, line[i]);

}


void xuat(int n, string line[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<line[i];
        if(i < n-1) cout<<endl;
    }

}

int main() {
    int n;
    string line[2000];
    cin>>n;
    nhap(n, line);
    xuat(n, line);
    return 0;
}
