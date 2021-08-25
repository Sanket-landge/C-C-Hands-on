#include<stdio.h>
#include<conio.h>
int reverse(int);
int a,rev=0;
int main()
{
	printf("Enter the number");
	scanf("%d",&a);
    rev=reverse(a);
    printf("%d",rev);
    getch();
}
int reverse(int n)
 {
 	int b;
 	if (n!=0)
 	{
 		b=n%10;
 		rev=rev*10+b;
 		n=n/10;
 		reverse(n);
	 }
   return rev;
 }
