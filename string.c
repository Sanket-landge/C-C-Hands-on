#include<stdio.h>
#include<conio.h>
int main()
{
	char s[3][10];
	int i;
	printf("enter your full name: ");
	for(i=0;i<3;i++)
		scanf("%s",&s[i][0]);
		
	for(i=0;i<3;i++)
		printf("%s\n",s[i]);
	
	getch();
	return 0;
}
