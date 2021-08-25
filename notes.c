#include<stdio.h>
#include<conio.h>
int main()
 {
 	int amt,total;
 	printf("Enter the amount:");
 	scanf("%d",&amt);
 	total=amt/100;
 	printf("there are %d notes of 100",total);
 	total=(amt-(total*100))/50;
    printf("There are %d notes of 50",total);
    getch();
    return 0;
 }
