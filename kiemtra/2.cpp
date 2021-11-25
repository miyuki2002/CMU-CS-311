#include <iostream>
#include<string>
#include<math.h>
using namespace std;


class Employee{
private:
    string hoten;
    int ngay,thang,nam;
    long long Salary;
public:

    Employee(){
        this->hoten = "Not Available";
        this->ngay = 1; thang = 1; nam = 2000;
        this->Salary = 0;
    }

    void input()
    {
        getline(cin, hoten);
        cin>>this->ngay>>this->thang>>this->nam;
        cin>>this->Salary;
    }
    int getSalary()
	{
		return Salary;
	}
    void display()
    {

        cout<<"- Full Name: "<<this->hoten<<endl<<"- Birth Date: "<<this->ngay<<"/"<<this->thang<<"/"<<this->nam<<endl<<"- Salary: "<<this->Salary;
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
		if(len==1){
			cout<<ShopName<<" has an employee"<<endl;
			for(int i=0;i<this->len;i++)
            {
                pArr[i].display();
                cout<<endl;
            }
		}
		if(len>1){
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
