#include<stdio.h>
#include<conio.h>
void reverse(int);
main()
{
    int x;
	printf("Enter a number");
	scanf("%d",&x);
	reverse(x);
	getch();
}

void reverse(int a)
{
	int c=0,b;
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("%d",c);
}
