#include<iostream>
using namespace std;

int mul(int a,int b)
{
	return a*b;
}

float mul(double a,int b)
{
	return a*b;
}

main()
{
	int a;
	float b;
	
	a=mul(12,14);
	b=mul(2.3,4);
	cout<<a<<endl;
	cout<<b<<endl;
}
