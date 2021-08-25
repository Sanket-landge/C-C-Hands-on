#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;	
};
struct node *top;

void push(void);
void pop(void);
void display(void);
void main()
{
	int choice;
	while(1){
		printf("\nStack Implementaion using linked list");
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("Choose any option: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default:printf("Wrong choice!!Please secent valid option.");
		}
	}
}
void push(void)
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
	printf("Element pushed.");
}

void pop(void)
{
	struct node *temp;
	temp=top;
	if(top==NULL)
		printf("Stack is already empty");
    else
    {
    	printf("%d",temp->data);
    	top=temp->link;
    	temp->link=NULL;
    	free(temp);
	}
}
void display(void)
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
		printf("Stack is empty");
	else
	{
		while(temp!=NULL)
		{
		printf("%d\t",temp->data);
		temp=temp->link;
	    }
	}
}

