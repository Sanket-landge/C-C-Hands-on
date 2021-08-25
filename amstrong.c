#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int num,num2,result,i,temp,sum=0;
	printf("Enter number: ");
	scanf("%d%d",&num,&num2);
	for(i=num;i<=num2;i++)
	{
	 temp=i;
    while(temp>0)
	{
		result=temp%10;
		sum=sum+pow(result,3);
		temp=temp/10;
	}
	if(i==sum)
		printf(num);
    }
    getch();
   
	return 0;
}
