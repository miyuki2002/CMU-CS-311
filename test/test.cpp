#include <iostream>
using namespace std;

int main() {
    char c;
    c = 'A';
    short sh;
    sh = 1567;
    int i = 99;
    cout<< &sh << endl;
    cout<< &i <<endl;
    cout<< (long long)(&c);

    return 0;
}
