#include<stdio.h>
#include<conio.h>
void inset(int*);
void display(int*);
void sort(int*);
int main()
{
	int a[5];
	insert(a);
	display(a);
	sort(a);
	display(a);
	getch();
}
void insert(int *p)
{
	int i;
	printf("Insert Five values");
	for(i=0;i<=4;i++)
		scanf("%d",p+i);
}
void display(int *p)
{
	int i;
	printf("Values before sorting");
	for(i=0;i<=4;i++)
		printf("%d",*(p+i));
}
void sort(int *p)
{
	int i,j,t;
	for(j=1;j<=4;j++)
	{
		for(i=0;i<=4-j;i++)
		{
	    	if (*(p+i)>*(p+i+1))
    		{
		    	t=*(p+i);
		    	*(p+i)=*(p+i+1);
		    	*(p+i+1)=t;
	    	}
    	}
	}
}
