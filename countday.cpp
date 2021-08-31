#include<iostream>
using namespace std;

bool NamNhuan(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))	return true;
	else return false;
}
int maxDay(int m, int y)
{
	if (m==4 || m==6 || m==9 || m==11)
		return 30;
	else
		if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			return 31;
	else
		if (m==2 && NamNhuan(y)==true)
			return 29;
	else
		return 28;
}
void nhap(int &d, int &m, int &y)
{
	cin>>d>>m>>y;
}

int countday(int d, int m, int y)
{
    int count = d;

	for (int i = 1; i <= m - 1; i++)
	{
		count = count + maxDay(i, y);
	}

	return count;
}

int main()
{
	int d,m,y;
	nhap(d,m,y);
    cout<<countday(d,m,y);
    return 0;
}
