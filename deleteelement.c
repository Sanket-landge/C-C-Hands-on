#include<conio.h>
#include<stdio.h>
int main()
{
	int a[20]={12,33,55,66,44};
	int i,position;
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
		
	printf("\n Enter the position you want to delete element from: ");
	scanf("%d",&position);
	
	for(i=position;i<4;i++)
	{
		a[i]=a[i+1];
	}
	
	for(i=0;i<4;i++)
		printf("%d\t",a[i]);
	
	getch();
	return 0;
}
