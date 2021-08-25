#include<stdio.h>
#include<conio.h>

int main()
 {
 	int x;
 	float y;
 	printf("Enter the distance in km:");
 	scanf("%d",&x);
 	printf("Enter the petrol spent in ltr:");
 	scanf("%f",&y);
 	printf("Average is %f",x/y);
 	getch();
 	return 0;
 }
