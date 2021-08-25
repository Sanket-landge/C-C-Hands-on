#include<iostream>
using namespace std;
class Account
{
	public:
		float salary=60000;
};

class Programmer:public Account
{
	public:
		float bonus=5000;
};

int main()
{
	Programmer p1,p2;
	cout<<"Salary: "<<p1.salary<<endl;
	cout<<"Bonus: "<<p1.bonus<<endl;
	p2.salary=30000;
	p2.bonus=1000;
	cout<<"Salary: "<<p2.salary<<endl;
	cout<<"Bonus: "<<p2.bonus<<endl;
	return 0;
}
