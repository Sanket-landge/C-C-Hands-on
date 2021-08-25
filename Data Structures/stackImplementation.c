#include<stdio.h>
#include<conio.h>
int stack[5],top= -1 ;
void push(int);
int isFull(void);
int pop();
int isEmpty();
int peek();
void display();
int main(){
	int choice,element,item;
	while(1){
		printf("1.Push()\n2.Pop()\n3.Peek()\n4.Display()\n5.Quit");
		printf("\nEnter your choice: \n");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the number: ");
				   scanf("%d",&element);
				   push(element);
	               break;
			case 2: item=pop();
			       if(item==0){
			       	printf("Stack is empty\n");
				   }
				   else{
				   	printf("%d\n",item);
				   }
				   break;
			case 3: item=peek();
					if(item==0)
						printf("Stack is empty");
					else
						printf("%d\n",item);
					
					break;
			case 4: display();
			       break;
			case 5: exit(0);
			default: printf("Invalid option\n");
			        break;
		}
	}
	return 0;
}
void push(int element){
	if(isFull())
		printf("Stack is full\n");
	else{
		top++;
		stack[top]=element;
		printf("Element pushed\n");
	}
}
int isFull(void){
	if(top==5-1)
		return 1;
	else
		return 0;
}

int pop(){
	if(isEmpty())
		return 0;
	else{
		return (stack[top--]);
	}
}

int isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}

int peek(){
	if(isEmpty)
		return 0;
	else{
		return (stack[top]);
	}
}

void display (void){
	int i;
	if(isEmpty())
		printf("Stack is empty\n");
	else
	{
		for(i=0;i<=top;i++)
			printf("%d\n",stack[i]);
 }
}
