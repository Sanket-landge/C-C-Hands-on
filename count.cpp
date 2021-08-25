#include<stdio.h>
#include<conio.h>
int countdigit(int);
int count=0;
main()
{
	int num,total;
	printf("Enter the number");
	scanf("%d",&num);
	total=countdigit(num);
	
	printf("There are total %d digits in %d",total,num);
	
	getch();	
}
int countdigit(int n)
{
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	return count;
}
