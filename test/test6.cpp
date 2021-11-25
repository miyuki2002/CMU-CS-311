#include <iostream>
using namespace std;

class Date{
public:
    void input() {
        cin>>this->day;
        cin>>this->month;
        cin>>this->year;
    }
    Date(int day = 1, int month = 1, int year = 2000){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    Date(const Date& dt){
        this->day = dt.day;
        this->month = dt.month;
        this->year = dt.year;
    }
    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
private:
    int day;
    int month;
    int year;
};
int main(){
    Date dt1;
    dt1.display();

    Date dt2(2, 2, 2000);
    dt2.display();

    Date dt3(dt2);
    dt3.display();

    dt3.input();
    dt3.display();
    return 0;

}
