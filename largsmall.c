#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10];
	int i,n,large,small;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("Enter elements for an array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	small=a[0];
	large=a[0];
		
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("largest element=%d\nSmallest element=%d",large,small);
	getch();
	return 0;
}
