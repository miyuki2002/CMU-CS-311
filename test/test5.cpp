#include <iostream>
using namespace std;

class Date{
    bool setDay(int dd){...}
public:
    void input(){...}
    void display(){...}
    int getDay(){return day;}
    int getMonth(){...}
    int year;
private:
    bool setMonth(int mm){...}
    int day, month;
};
int main(){
    Date dt;
    dt.input();
    dt.display();
    dt.getDay();
    return 0;

}
