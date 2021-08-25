#include<conio.h>
#include<stdio.h>
int recursive();

float var;
int count=1;
float percent;

main()
{
	printf("Enter a value to split in percent:");
	scanf("%f",&var);
	var = var/100;
	recursive();
	printf("\n");
	getch();
}

int recursive()
{
	if(count==101)
	{
	 return 1;
    }
    
    percent=var*count;
    printf("\n%d percent = %f",count,percent);
    count++;
    recursive();
    return 0;
    
}
