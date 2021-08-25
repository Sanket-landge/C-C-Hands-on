#include<conio.h>
#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the number to find out the factorial:\n ");
	scanf("%d",&n);
	k=sum(n);
	printf("sum of %d is %d",n,k);
	getch();
	return 0;
}

int sum(int f)
{
	int s;
	if(f==1)
		return f;
	s=f+sum(f-1);
	return s;
}
