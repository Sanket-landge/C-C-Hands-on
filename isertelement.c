#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10]={11,22,33,55,66};
	int i,position,element;
    for(i=0;i<5;i++)
    	printf("%d\t",a[i]);
    
    printf("\nAt what position you want to enter an element: ");
    scanf("%d",&position);
    printf("Enter the element: ");
    scanf("%d",&element);
    
    for(i=4;i>=position;i--)
    {
    	a[i+1]=a[i];
	}
	a[position]=element;
	
	for(i=0;i<=5;i++)
		printf("%d\t",a[i]);
	
	getch();
	return 0;
}
