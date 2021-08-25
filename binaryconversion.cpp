#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int i,k,num;
	
	cout<<"Entet any decimal number: ";
	cin>>num;
	
	i=0;
	while(num>0)
	{
		a[i]=num%2;
		num=num/2;
		i++;
	}
	
	cout<<"Equivalent binary number is: "<<endl;
	for(k=i-1;k>=0;k--)
		cout<<a[k];
		
}
