#include<iostream>
using namespace std;
main()
{
	int a=20,b=30,*p=&a,*p2=&b;
	cout<<"Before swap: "<<endl;
	cout<<"*p="<<*p<<"\t*p2="<<*p2;
	
	*p=*p+*p2;
	*p2=*p-*p2;
	*p=*p-*p2;
	
	cout<<"\nAfter swap: "<<endl;
	cout<<"*p="<<*p<<"\t*p2="<<*p2;
	
	
}
