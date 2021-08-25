#include<conio.h>
#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j;
	printf("Enter 9 values for matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Upper trianlge");
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	getch();
	return 0;
}
