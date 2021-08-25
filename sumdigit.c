#include<stdio.h>
#include<conio.h>
int main()
{
 int n,num,result,i=0;
 printf("Enter the number: ");
 scanf("%d",&n);
 while(i<=3)
 {
 	result=n%10;
 	num=num*10+result;
 	n=n/10;
 	i++;
 }
 getch();
 return 0;
}
