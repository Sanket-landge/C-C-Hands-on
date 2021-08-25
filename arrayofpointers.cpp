#include<iostream>
using namespace std;
main()
{
	int ptr[5],i;
	int *ptr1[5];
	
	cout<<"Enter 5 values for array: "<<endl;
	for(i=0;i<5;i++)
		cin>>ptr[i];
		
	for(i=0;i<5;i++)
		ptr1[i]=&ptr[i];
		
	cout<<"The values are: "<<endl;
	for(i=0;i<5;i++)
		cout<<*ptr1[i]<<endl;
}
