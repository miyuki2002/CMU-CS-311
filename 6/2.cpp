#include <iostream>
#include <vector>
using namespace std;
void input(vector<long> *vt)
{
  	for(int i = 0; i <(*vt).size(); i++)
      cin>>(*vt)[i];
}
void display(vector<long> *vt)
{
    for(int i = 0; i < (*vt).size(); i++){
      cout<<(*vt)[i]<<" ";
    }
}
int main()
{
	int n;
	cin>>n;
    vector<long> vt(n);
    input(&vt);
    display(&vt);
    return 0;
}