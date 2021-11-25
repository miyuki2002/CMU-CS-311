#include <iostream>
#include<string>
#include<math.h>

using namespace std;


bool NamNhuan(int nam)
{
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		return true;
	}
	return false;

}

int NTT(int thang, int nam)
{
	int days;

	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		if (NamNhuan(nam))
		{
			days = 29;
		}
		else
		{
			days = 28;
		}
		break;
	}

	return days;
}

bool verify(int ngay, int thang, int nam)
{
	if (nam < 1900)
		return false;

	if (thang < 1 || thang > 12)
		return false;


	if (ngay < 1 || ngay > NTT(thang, nam))
		return false;

	return true;
}

void xoakituthua(string &str)
{

	while (str[0] == ' ')
	{
		str.erase(str.begin() + 0);
	}



	while (str[str.length() - 1] == ' ')
	{
		str.erase(str.begin() + str.length() - 1);
	}
}


void xoakitutrang(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{

		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			str.erase(str.begin() + i);
			i--;
		}
	}
}


void chuanhoaten(string &hoten)
{

	 char *strlwr(char *hoten);

	if (hoten[0] != ' ')
	{
		if (hoten[0] >= 97 && hoten[0] <= 122)
		{
			hoten[0] -= 32;
		}

	}

	for (int i = 0; i < hoten.length() - 1; i++)
	{
		if (hoten[i] == ' ' && hoten[i + 1] != ' ')
		{

			if (hoten[i + 1] >= 97 && hoten[i + 1] <= 122)
			{

				hoten[i + 1] -= 32;
			}
		}
	}
}

class Employee{
private:
    string hoten;
    int ngay,thang,nam;
    long long Salary;
public:

    Employee(){
        hoten = "Not Available";
        ngay = 1; thang = 1; nam = 2000;
        Salary = 0;
    }

    void input()
    {
        getline(cin, hoten);
        do{
        cin>>this->ngay>>this->thang>>this->nam;
        }while(!verify(ngay,thang,nam));
        cin>>this->Salary;
        xoakituthua(hoten);
        chuanhoaten(hoten);
    }
    void display()
    {

        cout<<"- Full Name: "<<this->hoten<<endl<<"- Birth Date: "<<this->ngay<<"/"<<this->thang<<"/"<<this->nam<<endl<<"- Salary: "<<this->Salary;
    }
};

int main()
{
    Employee ee1, ee2;
    ee2.input();

    ee1.display();
    cout << endl << endl;
    ee2.display();
    return 0;
}
