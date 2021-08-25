#include<conio.h>
#include<stdio.h>
int main()
{
	int a[20];
	int i,j,temp,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\nBefore Sorting: ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
		
	for(i=1;i<n;i++)
	{
		temp=a[j];
		for(j=i;j>0 && temp<a[j-1];j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	
	printf("\nAfter Sorting: ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	
	getch();
	return 0;
}

