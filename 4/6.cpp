#include <iostream>
using namespace std;
void iStrCat(char strA[],char strB[])
{
    int a = 0;
	int b = 0;
	while (strA[a] != '\0')
    {
		a++;
    }
    while (strB[b] != '\0')
    {
		b++;
    }

	for(int i = a; i < a + b; i++)
	{
		strA[i] = strB[i-a];
	}
	strA[a+b]='\0';
}
int main()
{
    char strA[1000];
    char strB[1000];
    cin.getline(strA, 1000);
    cin.getline(strB, 1000);
    iStrCat(strA, strB);
    cout << strA;
    return 0;
}
