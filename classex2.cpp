//example of C++ class where we are initializing and displaying object through method.

#include<iostream>
using namespace std;

class Student
{
	public:
		int id; 
		string name;
		
	void insert(int i,string n) //fucntion for inserting values
	{
		id=i;
		name=n;
	}
	
	void display() //function to display the content.
	{
		cout<<"Id="<<id<<"\nName="<<name<<endl;
	}
};

int main()
{
	Student s1; //creting object of student class
	Student s2; //creating object of student class
	
	s1.insert(133,"Sanket Landge");
	s2.insert(107,"James bond");
	s1.display();
	s2.display();
	return 0;
}

