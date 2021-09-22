#include <iostream>
using namespace std;
int isWhiteSpace(char str)
{
	return (str == ' '|| str == '\t');
}
int countWords(char str[1000])
{
	int dem=0;
	int count =0;
	for(int i=0;str[i]!='\0';i++)
		dem++;
	for(int j=0;j<dem;j++)
	{
		if(!isWhiteSpace(str[j]) && isWhiteSpace(str[j+1]) || !isWhiteSpace(str[j]) && !isWhiteSpace(str[j+1]) && j+1 == dem-1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
    char str[1000];
    cin.getline(str,1000);
    int numberOfWords = countWords(str);
    cout << numberOfWords;
    return 0;
}
