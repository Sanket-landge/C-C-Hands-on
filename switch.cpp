#include<iostream>
using namespace std;
main()
{
	int grade;
	cout<<"enter the number to cheack grade..";
	cin>>grade;
	switch(grade)
	{
		case 10:
			cout<<"Youve entered 10";
			break;
		
		case 20:
			cout<<"Youve entered 20";
			break;
			
		case 30:
			cout<<"Yu have entered 30";
			break;
		
		default:
			cout<<"This is not 10,20 or 30";
			break;
	}
}
