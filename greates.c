#include<stdio.h>
#include<conio.h>

int a,b,c;
int main()
{
	int biggest;
	printf("Enter three values");
	scanf("%d%d%d",&a,&b,&c);
	biggest=big(a,b,c);
	printf("%d is greatest",biggest);
	getch();
	return 0;
}
int big(int p, int q, int r)
{
	if(p>q)
	{
		if(p>r)
		{
			return p;
		}
		else
		{
			return r;
		}
	}
	else
	{
		if(q>r)
		{
			return q;
		}
		else{
			return r;
		}
	}
}
