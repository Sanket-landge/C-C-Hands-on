#include<stdio.h>
#include<conio.h>
int main()
{
 int n,result,sum=0;
 printf("Enter the number: ");
 scanf("%d",&n);
 while(n>0)
 {
 	result=n%10;
 	sum=sum+result;
 	n=n/10;
 }
 printf("Sum is : %d",sum);
 getch();
 return 0;
}
