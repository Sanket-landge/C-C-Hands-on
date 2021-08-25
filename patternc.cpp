

#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter any number: "<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			if(j==1 || j==n+1-i || i==1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}

}
	
