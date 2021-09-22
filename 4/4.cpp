#include <iostream>
using namespace std;

void iStrCopy(char line1[], char line2[])
{
    int n = 0;
    while (line1[n] != '\0')
    {
        line2[n] = line1[n];
        n++;
    }
    line2[n] = '\0';
}
int main() {
    char line1[200];
    char line2[200];
    cin.getline(line1, 200);
    iStrCopy(line1, line2);
    cout << line2;
    return 0;
}

