#include <iostream>
using namespace std;
void xoa(char str[],int vitrixoa)
{
	int len=0;
	for(int i=0;str[i] != '\0';i++)
		len++;
	for(int i = vitrixoa+1;i<len;i++)
	{
		str[i-1] = str[i];
	}
	str[len-1] = '\0';
}
void iTrim(char str[])
{
	while(true)
    {
    	if(str[0] == ' ')
    	{
    		xoa(str,0);
    	}
    	else
    	{
    		break;
    	}
    }
}
void iTrim1(char str[])
{
	int len=0;
	for(int i=0;str[i] != '\0';i++)
		len++;
	while(true)
    {
    	if(str[len-1] == ' ')
    	{
    		Xoa(str,len--);
    	}
    	else
    	{
    		break;
    	}
    }
}
int main()
{
    char str[200];
    cin.getline(str, 200);
    iTrim(str);
    iTrim1(str);
    cout << "" << str << "";
    return 0;
}
