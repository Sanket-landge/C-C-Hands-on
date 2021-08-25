#include<stdio.h>
#include<conio.h>

int main()
{
	char first;
	char second;
	char third;
	printf("Entter three characters");
	scanf("%c%c%c,&first,&second,&third");
	printf("The reverse of %C%c%c is %c%c%c",first,second,third,third,second,first);
	getch();
	return 0;
}
