#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	int fact=0;
	
	printf("Enter an integer number");
	scanf("%d",&num);
	
	fact=factorial(num);
	printf("factorial of %d is %d",num,fact);
	
	printf("\n");
	 
	getch();
	
}

int factorial(int n)
{
	if(n==1)
	 return 1;
	return (n*factorial(n-1));
}
