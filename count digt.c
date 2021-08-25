#include<stdio.h>
#include<conio.h>
int countdigit(int);
int count=0;
main()
{
	int num;
	int total;
	
	printf("enter the number");
	scanf("%d",&num);
	
	total=countdigit(num);
	
	printf("there are total %d digits in %d",total,num);
	getch();
}
 int countdigit(n)
 {
 
 	if(n>0)
 	{
 		count++;
 		countdigit(n/10);
	}
	 else
	 {
	 	return (count);
	 }
 }
