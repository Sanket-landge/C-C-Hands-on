#include<iostream>
using namespace std;
main()
{
	int marks;
	cout<<"Enter your marks: ";
	cin>>marks;
	if(marks<0 || marks>100)
	{
		cout<<"Please enter valid marks";
	}
	else if(marks>0 && marks<50)
	{
		cout<<"Youre failed..";
	}
	else if(marks>=50 && marks<100)
	{
		cout<<"You have passed";
	}
}
