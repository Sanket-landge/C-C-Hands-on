#include<iostream>
using namespace std;
main()
{
	int a=70;
	int &b=a;
	int &c=a;
	
	cout<<"Value of a is: "<<a<<endl;
	cout<<"Value of b is: "<<b<<endl;
	cout<<"Value of c is: "<<c<<endl;
}
