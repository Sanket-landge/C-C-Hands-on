#include<iostream>
using namespace std;
class Employee
{
	public:
		Employee()
		{
			cout<<"Constructor is envoked"<<endl;
		}
		
		~Employee()
		{
			cout<<"Destructor is envoked"<<endl;
		}
};

int main()
{
	Employee e1;
	Employee e2;
	return 0;
}
