#include <iostream>
using namespace std;
int isWhiteSpace(char str)
{
	return (str == ' '|| str == '\t');
}
void printWords(char str[201])
{
    int dem=0;
	while (str[dem] != '\0')
		dem++;
	for(int i = 0; i < dem; i++)
	{
		if(!isWhiteSpace(str[i]) && !isWhiteSpace(str[i+1]) || !isWhiteSpace(str[i]) && isWhiteSpace(str[i+1]))
		{
			if(!isWhiteSpace(str[i]) && isWhiteSpace(str[i+1]))
				cout<<str[i]<<endl;
			cout<<str[i];
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
