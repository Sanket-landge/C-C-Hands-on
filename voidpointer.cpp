#include<iostream>
using namespace std;
main()
{
	int a=20;
	float b=22.3;
	void *ptr,*ptr1;
	
	ptr=&a;
	ptr1=&b;
	
	cout<<&a<<"\t"<<&b<<endl;
	cout<<"ptr="<<ptr<<"\tptr1="<<ptr1<<endl;
}
