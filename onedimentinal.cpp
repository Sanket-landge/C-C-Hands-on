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
		cout<<a[i];
		
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	cout<<"\nAfter Sorting: ";
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	
	return 0;
}
