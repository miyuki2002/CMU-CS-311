#include <iostream>
using namespace std;

int iGetLen(char line[2000])
{
  	int count = 0;
    while (line[count] != '\0')
    {
		count++;
    }
  	return count;
}

int main() {
    char line[2000];
    cin.getline(line, 2000);
    cout << iGetLen(line);
    return 0;
}
