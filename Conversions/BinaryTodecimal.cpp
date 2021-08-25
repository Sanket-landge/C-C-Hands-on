#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,rem, dec=0, i=0;
	
	cin>>num;
	
	while(num>0)
	{
		rem=num%10;
		dec=dec+(rem*pow(2,i));
		i++;
		num=num/10;
	}
	
	cout<<dec;
}
