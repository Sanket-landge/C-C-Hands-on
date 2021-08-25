#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5][5],i,j,sum=0;
	printf("Enter 9 values for the matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{uyj
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum is %d",sum);
	getch();
	return 0;
}

