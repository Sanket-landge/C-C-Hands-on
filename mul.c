#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,choice;
	printf("select your choice\n");
	printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division");
	scanf("%d",&choice);
	switch(choice)
    {
    	case 1: 
    		printf("Enter two numbers");
    		scanf("%d%d",&a,&b);
    		c=a+b;
    		printf("Addition is %d",c);
    		break;
    	case 2:
    	    printf("Enter two numbers");
    		scanf("%d%d",&a,&b);
    		c=a-b;
    		printf("subtracton  is %d",c);
    		break;
    	case 3:
    	    printf("Enter two numbers");
    		scanf("%d%d",&a,&b);
    		c=a*b;
    		printf("Multiplication is %d",c);
    		break;
    	case 4:
    		printf("Enter two numbers");
    		scanf("%d%d",&a,&b);
    		c=a/b;
    		printf("division is %d",c);
    		break;
    	default:
    		printf("Invalid choice");
		
	}
getch();

}


