#include <iostream>
using namespace std;

void iStrCopy(char line[], char a[], int &n)
{
    while (line[n] != '\0')
    {
        a[n] = line[n];
        n++;
    }
    a[n] = '\0';
}

bool isSymmetricalString(char line[], char a[], int &n)
{
    for(int i=0; i < n/2; i++)
{
    if(line[i] != a[n-i-1])
    return false;
}
return true;
}

int main() {
    char line[2000], a[2000]; int n = 0;
    cin.getline(line, 2000);
    iStrCopy(line, a, n);

    if (isSymmetricalString(line, a, n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

