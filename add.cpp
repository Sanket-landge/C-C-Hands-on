#include<conio.h>
#include<stdio.h>
int main()
{
	int x=5;
	printf("%d\n",x);
	printf("%d",&x);
	printf("%d",*&x);
	getch();
	return 0;
}
