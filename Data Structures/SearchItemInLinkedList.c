#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *root;
void append(void);
void search(void);
void main()
{
	int choice;
	while(1)
	{
		printf("\n1.Create/Append\n2.Search\n3.Exit");
		printf("\nChooose any option:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: append();
					break;
			case 2: search();
					break;
			case 3: exit(0);
			default: printf("Wrong choice!!");
		}
	}
}
void append()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("Enter data to insert: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		struct node *p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}

void search(void)
{
	struct node *temp;
	int i=0,item,flag;
	temp=root;
	if(temp==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		printf("Enter the element to be searched: ");
		scanf("%d",&item);
		while(temp!=NULL)
		{
			if(temp->data==item)
			{
				printf("Item found at %d location",i+1);
				flag=0;
				break;
			}
			else
			{
				flag=1;
			}
			i++;
			temp=temp->link;
		}
		if(flag==1)
			printf("Item not found");
	}
	
}
