#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],t[10][10];
	int m,n,i,j;
	printf("Enter size of rows and columns: ");
	scanf("%d%d",&m,&n);
	printf("Enter Values for matrix: ");
	for(i=0;i<m;0.i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				t[i][j]=a[j][i];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",t[i][j]);
		printf("\n");
	}
}
