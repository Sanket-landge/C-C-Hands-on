#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10]={10,20,30,40,50};
	int i,flag=0,key;
	
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Element is found at %d position",i);
	else
		printf("Element is not found.");
		
	getch();
	return 0;
}
