#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[10];
	int i,j,n,temp;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	cout<<"Enter the values";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"Before Sorting: "<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
		
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i;j>0&&temp<a[j-1];j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	
	cout<<"\nAfter Sorting: ";
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	
	return 0;
}
