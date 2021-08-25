#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int num,result,temp,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		result=temp%10;
		sum=sum+pow(result,3);
		temp=temp/10;-
	}
	if(num==sum)
		printf("%d is Amstrong number",num);
	else
		printf("%d is not an Amstrong number",num);
	getch();
	return 0;
}
