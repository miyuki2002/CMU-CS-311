#include <iostream>
#include<string>
#include<math.h>
using namespace std;

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

class Date
{
private:
    int day;
    int month;
    int year;
public:

	Date(){}
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
    void input() {
        cin >> this->day;
        cin >> this->month;
        cin >> this->year;
    }
};
class Employee{
private:
	string name,d;
	Date date;
	int salary;
public:
	Employee(){
	}
	Employee(string name, Date date,int salary)
	{
		this->name = name;
		this->date = date;
		this->salary = salary;
	}
	void input()
	{
	    do{
            getline(cin,name);
		}while(name == "");
		date.input();
		cin>>this->salary;
		chuanhoaten(name);
	}
	void display()
	{
		cout<<"- Full Name: "<<this->name<<endl;
		cout<<"- Birth Date: ";
		this->date.display();
		cout<<"- Salary: "<<this->salary<<endl;
	}
	int getSalary()
	{
		return salary;
	}
};


class Shop{
private:
	int len;
	Employee* pArr;
	int Totalsalary;
	string ShopName;
public:
	Shop()
	{
		this->len = 0;
		this->pArr = NULL;
		this->Totalsalary = 0;
		this->ShopName ="Not Available";
	}
	void input()
	{
		getline(cin,this->ShopName);
		cin>>this->len;
		pArr = new Employee[this->len];
		for(int i=0;i<this->len;i++)
		{

			pArr[i].input();

		}
	}
	int getTotalSalary(){
		for(int i=0;i<this->len;i++)
		{
			this->Totalsalary += pArr[i].getSalary();
		}
		return this->Totalsalary;
	}
	void display()
	{
		if(len==0)
			cout<<'"'<<ShopName<<'"'<<" has no employees"<<endl;
		else if(len==1){
			cout<<ShopName<<" has an employee"<<endl;
			for(int i=0;i<this->len;i++)
            {
                pArr[i].display();
            }
		}
		else if(len>1){
			cout<<ShopName<<" has "<<this->len<<" employees"<<endl;
            for(int i=0;i<this->len;i++)
            {
                cout<<"EMPLOYEE: "<<i+1<<endl;
                pArr[i].display();
                //cout<<endl;
            }
		}
	}
};

int main()
{
    Shop shop;
    shop.input();
    shop.display();
    cout << "Total salary: " << shop.getTotalSalary();
    return 0;
}
