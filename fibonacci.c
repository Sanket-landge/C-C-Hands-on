#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
	getch();
	return 0;
	
}
