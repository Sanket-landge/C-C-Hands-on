#include<conio.h>
#include<stdio.h>
int main()
{
	int a[20];
	int i,j,n,temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("\nEnter values: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\nBefore sorting: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n After Sorting\n: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		
	getch();
	return 0;	
}
