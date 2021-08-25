#include<conio.h>
#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
};
main()
{
    struct student s1;
    printf("Enter student Roll no and Name");
    scanf("%d,%s",&s1.rollno,&s1.name);
    getch();
}
