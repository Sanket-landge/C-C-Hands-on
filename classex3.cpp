//example of C++ class where we are storing and displaying employee information using method

#include<iostream>
using namespace std;
class Employee
{
	public:
	int id;
	string name;
	float salary;
	
	void insert(int i, string n, float s)
	{
		id=i;
		name=n;
		salary=s;
	}
	
	void display()
	{
		cout<<"Id="<<id<<"\tName="<<name<<"\tSalary="<<salary<<endl;
	}
};
int main()
{
	Employee e1;
	Employee e2;
	e1.insert(101,"Sanket Landge",55.999);
	e2.insert(102,"Rajesh Jain",45.999);
	e1.display();
	e2.display();
	return 0;
}
