#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,m,n;
	printf("Enter number of rows and columns: ");
	scanf("%d%d",&m,&n);
	printf("Enter  values for matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Upper trianlge: ");
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n Lower traingle: ");
	for(i=1;i<m;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	getch();
	return 0;
}
