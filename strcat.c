#include<stdio.h>
#include<conio.h>
main()
{
	char st1[20]="My name is ",name[20]="Sanket landge";
	strcat(st1,name);
	puts(st1);
	
	printf("%s",strrev(st1));
	getch();
}
