#include<conio.h>
#include<stdio.h>
int main()
{
	int a[20]={10,20,30,40,50};
	int i,key,flag=0,low=0,high=4,mid;
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
		
	printf("\nEnter the element to be searched:");
	scanf("%d",&key);
	
	while(low<=high)                                                                                                                                                                                 
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			flag=1;
			break;
		}
		else
			if(key<a[mid])
				high=mid-1;
				
			else
				low=mid+1;
	}
	if(flag==1)
		printf("Key found at %d position",mid);
	else
		printf("Key is not found");
		
	getch();
	return 0;	
}
