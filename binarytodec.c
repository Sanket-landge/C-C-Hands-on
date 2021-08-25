#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,num=0,rem;
	long int n;
	printf("Enter any binary number: ");
	scanf("%ld",&n);
	while(n>0)
	{
		rem=n%10;
		num=num+rem*pow(2,i);
		n=n/10;
		i++;
	}
	printf("Decimal equivalent is %d",num);
	getch();
	return 0;
}
