#include<stdio.h>
#include<conio.h>
void insert(void);
void delete(void);
void display(void);

int queue[5];
int front=0, rear=0;
void main()
{
	int choice;
	while(1)
	{
		printf("\nProgram for Queue implementation: ");
		printf("\n1.Insert\n2.Display\n3.Delete\n4.Queue");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
					break;
			case 2: display();
					break;
			case 3: delete();
					break;
			case 4: exit(0);
			default: printf("\nWrong choice!! Choose the correct option.");
		}
	}
}

void insert(void)
{
	int ele;
	
	if(rear==5)
		printf("Queue is full");
	else
	{
	printf("Enter data: ");
	scanf("%d",&ele);
	
	queue[rear]=ele;
	rear++;
    }
}
void display(void)
{
	int i;
	if(rear==front)
		printf("\nQueue is Empty");
	else
	{
		printf("Queue Elements: ");
		for(i=front;i<rear;i++)
			printf("%d\t",queue[i]);
	}
}

void delete(void)
{
	int i;
	if(rear==front)
		printf("Queue is empty");
	else+
	{
		printf("%d\t",queue[front]);
		for(i=0;i<rear;i++)
		{
			queue[i]=queue[i+1];
			rear--;
	    }
	}
}
