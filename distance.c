#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
 {
 	float x1,y1,x2,y2,distance;
 	printf("Enter first point coordinate");
 	scanf("%f%f",&x1,&y1);
 	printf("Enter second point coordinate");
 	scanf("%f%f",&x2,&y2);
 	distance=sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
 	printf("Distance is %f",&distance);
 	getch();
 }
