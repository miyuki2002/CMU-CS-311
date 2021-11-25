#include <iostream>
#include<string>
#include<math.h>
using namespace std;


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
		cin>>d;
		getline(cin,name);
		date.input();
		cin>>this->salary;
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
                cout<<endl;
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
