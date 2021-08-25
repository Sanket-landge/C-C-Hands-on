#include<iostream>
using namespace std;
void swap(int &, int &);
main()
{
	int a=20;
	int b=30;
	swap(a,b);
	
	cout<<"a="<<a<<"\tb="<<b<<endl;
}

void swap(int &p,int&q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
