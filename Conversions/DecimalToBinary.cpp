#include<iostream>
using namespace std;
int main()
{
	int num,b[100],i,j;
	cin>>num;
	i=0;
	while(num>0)
	{
		b[i]=num%2;
		num=num/2;
		i++;
	}
	
	for(j=i-1;j>=0;j--)
		cout<<b[j];
}
