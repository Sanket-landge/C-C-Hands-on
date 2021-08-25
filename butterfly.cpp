#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter any number: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i && j<=n-i)
				cout<<"*";          
			else
				cout<<" ";
		}
	}
	cout<<endl;
}
