#include <iostream>
#include <vector>
#include<string.h>
using namespace std;
class Date
{
  	private:
  		int day,month,year;
	public:
	Date(int day =0 , int month = 0 , int year = 0  )
  	{
  		 this->day= day;
  		 this->month = month;
  		 this->year = year;
  	}
};
class Student
{
	public:
	Student(int id,string name, string add, Date dt )
	{
	  	this->id = id;
	  	this->name = name;
	  	this->add = add;
	  	this->dt = dt;
	}
	void display()
	{
		cout<<"-"<<this->name<<"("<<this->id<<")"<<endl;
	}
	private:
		string id,name,add;
		Date dt;
};

class Students
{
public:
	Students()
	{
		this->len = 0;
		pArr = NULL;
	}
  	void push_back(Student x)
  	{
  		pArr = new Student[len];
        this->pArr[len] = x;
        len++;
  	}
  	void pop_back()
  	{
  		len--;
  	}
  	int size()
  	{
  		return len;
  	}
  	void display()
  	{
  		for(int i=0;i<len;i++)
  		{
  			cout<<pArr[i].display();
  		}
  	}
private:
    int len;
    Student* pArr;
};

int main()
{
    Date dt1(12, 2, 2002);
    Student st1("26201242086", "Nguyen Hoc Lan", "12 Hoang Hoa Tham", dt1);

    Date dt2(12, 3, 2001);
    Student st2("26211441593", "Nguyen Quoc Nhat", "254 Nguyen Van Linh", dt2);

    Date dt3(8, 9, 2000);
    Student st3("26211238959", "Tran Thanh Thien", "128 Tai Do", dt3);

    Students sts1;
    sts1.push_back(st1); // sts1 contains: st1
    sts1.push_back(st2); // sts1 contains: st1, st2
    sts1.push_back(st3); // sts1 contains: st1, st2, st3

//    Students sts2 = sts1; // sts2 contains: st1, st2, st3
//    sts2.pop_back(); // sts2 contains: st1, st2
//    sts2.pop_back(); // sts2 contains: st1
//    sts2.push_back(st3); // sts2 contains: st1, st3

    cout << "sts1 has " << sts1.size() << " students:" << endl;
    sts1.display();

//    cout << "sts2 has " << sts2.size() << " students:" << endl;
//    sts2.display();
    return 0;
}
