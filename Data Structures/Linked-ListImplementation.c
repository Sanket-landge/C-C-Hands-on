//Program for linked list implementation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *root;
int len;
void append(void);
void addAtBegin(void);
void addAt(void);
int length(void);
void display(void);
void delete(void);
void search(void);
void reverse(void);

void main()
{
	int choice;
	while(1)
	{
		printf("\nProgram for Linked-list implementation: \n");
		printf("1.Append\n2.AddatBegin\n3.AddAt\n4.Length\n5.Display\n6.Search\n7.Delete\n8.Reverse\n9.Quit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:   append();
					  break;
				
			case 2:   addAtBegin();
					  break;
			
			case 3:   addAt();
			          break;
			
			case 4:   len=length();
					  printf("\nLength is %d\n",len);
			   		  break;
			   		  
			case 5:   display();
					  break;
					  
			case 6:   search();
					  break;
					  
		    case 7:   delete();
		    
		    case 8:   reverse();
		    
		    case 9:   exit(1);
		    
		    default:  printf("Invalid choice\n");
		    
		}
	}
}

void append(){
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("Enter data: ");
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
		printf("%d added to list",temp->data);
	}
}

void addAtBegin(void){
	struct node *temp;
	temp=malloc(sizeof(struct node));
	
	printf("\nEnter data: ");
	scanf("%d",&temp->data);
	
	temp->link=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		temp->link=root;
		root=temp;
	}
}

void addAt(void){
	struct node *temp, *p;
	int i=1;
	int loc;
	temp=malloc(sizeof(struct node));
	printf("Enter location to add element: ");
	scanf("%d",&loc);
	printf("\nEnter element: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	p=root;
	if(loc==1)
	{
		temp->link=root;
		root=temp;
	}
	else
	{
	while(i<loc-1)
	{
		p=p->link;
		i++;
	}
	temp->link=p->link;
	p->link=temp;
    }
	
}

int length(void){
	struct node *temp;
	int count=0;
	temp=root;
	
	if(root==NULL)
		printf("\nList is empty\n");
	else
	{
		while(temp!=NULL)
		{
			count++;
			temp=temp->link;
		}
	}
	return count;
}

void display(){
	struct node *temp;
	temp=root;
	
	if(root==NULL)
		printf("\nList is empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->link;
		}
	}
}

void delete(void){
	int loc;
	printf("\nEnter location to delete: ");
	scanf("%d",&loc);
	
	if(loc>length())
		printf("Invalid choice");
	else if(loc==1){
		struct node *temp;
		temp=root;
		
		root=temp->link;
		temp->link=NULL;
		free(temp);
		display();
	}
	else{
		struct node *p=root, *q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
		display();
	}
}

void search(void)
{
	struct node *temp;
	int i=0,item,flag;
	temp=root;
	
	if(root==NULL)
		printf("List is Empty");
	else
	{
		printf("Enter element to be searched: ");
		scanf("%d",&item);
		while(temp!=NULL)
		{
			if(temp->data==item)
			{
				printf("Element found at %d location",i+1);
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
			printf("Element not found");
	}
}

void reverse(void)
{
	int i,j,len,k,temp;
	struct node *p,*q;
	len=length();
	i=0;
	j=len-1;
	p=root;
	q=root;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
}
