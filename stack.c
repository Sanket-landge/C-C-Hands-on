#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top = -1 ;
void push(int);
int pop(void);
int peek(void);
void display(void);
int isFull(void);
int isEmpty(void);
int main(){
    int choice,ele,item;
    while(1){
        printf("Stack implementation\nChooce operations to perform:");
        printf("1.Push()\n2.Pop()\n3.Peek\n4.Display\n5.Exit\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1 : printf("\nEnter the element: ");
                     scanf("%d",&ele);
                     push(ele);
                     break;
            case 2 : item = pop();
                     if(item==0){
                         printf("Stack is empty");
                     }
                     else{
                         printf("%d",&item);
                     }
                     break;
            case 3 : item = peek();
                     if(item==0){
                         printf("Stack is empty");
                     }
                     else{
                         printf("%d",&item);
                     }
                     break;
            case 4 : display();
                     break;
            case 5 : exit(0);
            default: printf("Wrong input, Choose a valid option...");
        }

    }
}

void push(int ele){
    if(isFull){
        printf("Stack is already full\n");
    }
    else{
        top++;
        stack[top] = ele;
        printf("/nElements pushed");
    }
}

int isFull(void){
    if(top == CAPACITY-1){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(void){
    if(isEmpty){
        return 0;
    }
    else{
        return stack[top--];
    }
}

int peek(void){
    if(isEmpty){
        return 0;
    }
    else{
        return stack[top];
    }
}

int isEmpty(void){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void display(void){
    int i;
    if(isEmpty){
        printf("Stack is empty");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d\t",&stack[i]);
        }
    }
}