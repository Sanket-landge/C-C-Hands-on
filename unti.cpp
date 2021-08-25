#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
	int sum,x,y;
	printf("Enter two numbers");
	scanf("%d%d",&x,&y);
	sum=add(x,y);
	printf("%d",sum);
	getch();
}
 int add(int a,int b)
 {
 	int c;
 	c=a+b;
 	return c;
 }
