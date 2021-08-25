#include<iostream>
using namespace std;
int main()
{
	int num,i=0,j,o[100];
	cin>>num;
	
	while(num>0){
		o[i]=num%8;
		num=num/8;
		i++;
	}
	for(j=i-1;j>=0;j--)
		cout<<o[j];
}
