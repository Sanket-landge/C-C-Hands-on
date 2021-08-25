#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,num1,num2,flag;
	printf("Enter the range: ");
	scanf("%d%d",&num1,&num2);
    for(i=num1+1;i<=num2;i++)
    {
    	flag=0;
    	for(j=2;j<=i/2;j++)
    	{
    		if(i%j==0)
    		{
    			flag=1;
    			break;
			}
		}
		if (flag==0)
		{
			printf("%d",i);
		}	
	}	
	getch();
	return 0;
}
