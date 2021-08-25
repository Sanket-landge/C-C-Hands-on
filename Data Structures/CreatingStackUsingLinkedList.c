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
	push();
	push();
	push();
	display();
	pop();
	pop();
	display();
	pop();
	pop();
}
void push()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
	printf("Element pushed\n");
}
void pop()
{
	struct node *temp;
	if(top==NULL)
		printf("\nNo element to pop");
	else
	{
		temp=top;
		printf("%d\t",temp->data);
		top=top->link;
		temp->link=NULL;
		free(temp);
	}
}

void display()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
		printf("Stack is Empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->link;
		}
	}
}
