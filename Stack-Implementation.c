/*Program for implementation of Stacks using arrays*/

#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;
void push(int);
int pop(void);
int peek(void);
void display(void);
int isFull(void);
void display(void);
int isEmpty(void);

int main()
{
	int choice,element,item;
	while(1)
	{
		printf("\nStacks implemantation using Arrays: \n");
		printf("1.Push item into Stack\n2.Pop item from the Stack\n3.Peek item from the Stack\n4.Display all items\n5.Quit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\nEnter element: ");
					scanf("%d",&element);
					push(element);
					break;
			case 2: item=pop();
					printf("\n%d",item);
					break;
			case 3: item=peek();
					printf("\n%d",item);
					break;
			case 4: display();
					break;
			case 5: 
			default: printf("\nInvalid Choice, Please Choose a Valid option.");
		}
	}
}

void push(int ele)
{
	if(isFull())
		printf("\nStack is Already Full");
	else
	{
		top++;
		stack[top]=ele;
	}
}

int isFull(void)
{
	if(top==5-1)
		return 1;
	else
		return 0;
}
int pop()
{
	if(isEmpty())
	{
		printf("\nStack is empty");
	}
	else
	{
		return(stack[top--]);
	}
}
int peek()
{
	if(isEmpty())
	{
		printf("\nStack is empty");
	}
	else
	{
		return(stack[top]);
	}
}
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void display()
{
	int i;
	if(isEmpty())
		printf("Stack is Empty\n");
	else
	{
		for(i=0;i<=top;i++)
			printf("%d\t",stack[i]);
	}
}
