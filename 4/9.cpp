#include <iostream>
using namespace std;
int isWhiteSpace(char str)
{
	return (str == ' '|| str == '\t');
}
void printWords(char str[201])
{
    int dem=0;
	for(int i=0;str[i]!='\0';i++)
		dem++;
	for(int j=0;j<dem;j++)
	{
		if(!isWhiteSpace(str[j]) && isWhiteSpace(str[j+1]) || !isWhiteSpace(str[j]) && !isWhiteSpace(str[j+1]) && j+1 == dem-1)
		{

		}
	}
}
int main()
{
    char str[201];
    cin.getline(str, 201);
    printWords(str);
    return 0;
}
