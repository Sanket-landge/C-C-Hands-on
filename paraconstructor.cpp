#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		string name;
		float salary;
		
		Employee(int i, string n, float s)
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
	Employee e1=Employee(101,"sanket landge",55.999);
	Employee e2=Employee(102,"Rajesh jain",45.999);
	e1.display();
	e2.display();
	return 0;
}
