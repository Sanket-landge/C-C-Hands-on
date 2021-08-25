#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int binary;
	int decimal,rem,i=0;
	cout<<"Enter binary number: ";
	cin>>binary;
	
	while(binary>0)
	{
		rem=binary%10;
		decimal=decimal+rem*pow(2,i);
		i++;
		binary=binary/10;
	}
	
	cout<<"Decimal equivalent is "<<decimal;
}
