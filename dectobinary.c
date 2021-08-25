#include<stdio.h>
#include<conio.h>
int main()
{
	int num,j,i=0;
	int binary[10];
	printf("Enter any decimal number: ");
	scanf("%d",&num);
	while(num>0)
	{
		binary[i]=num%2;
		num=num/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",binary[j]);
		
	getch();
	return 0;
}
