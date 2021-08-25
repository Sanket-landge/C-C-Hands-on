#include<iostream>
using namespace std;
main()
{
	int i, j, n;
	cout<<"Enter any number: "<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==j || j==n)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
