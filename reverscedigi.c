#include<stdio.h>
#include<conio.h>
int main()
{
 int n,num,result;
 printf("Enter the number: ");
 scanf("%d",&n);
 while(n>0)
 {
 	result=n%10;
 	num=num*10+result;
 	n=n/10;
 }
 printf("Reverse digit: %d",num);
 getch();
 return 0;
}
