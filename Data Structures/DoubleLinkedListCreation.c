#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append(void);
void addAtBegin(void);
int length(void);
void display(void);
void addAfter(void);
struct node
{
	struct node *left;
	int data;
	struct node *right;	
};

struct node *root;
int main()
{
	int len;
	append();
	append();
	append();
	append();
	display();
	len=length();
	printf("\nLength is %d",len);
	addAtBegin();
	addAtBegin();
	display();
	len=length();
	printf("\nAfter adding length is %d",len);
	addAfter();
	addAfter();
	display();
	
	return 0;
}

void append()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		struct node *p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=temp;
		temp->left=p;
	}
}

void addAtBegin(void)
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("\nEnter data: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		temp->right=root;
		root->left=temp;
		root=temp;
	}
}

int length(void)
{
	struct node *temp;
	temp=root;
	int count=0;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->right;
	}
	return count;
}

void display(void)
{
	struct node *temp;
	temp=root;
	if(root==NULL)
		printf("List is empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->right;
		}
	}
}
void addAfter(void)
{
	struct node *temp,*p;
	int loc,len,i=1;
	printf("Enter location: ");
	scanf("%d",&loc);
	
	len=length();
	if(loc>len)
		printf("Unable to add data at this location, list contains only %d elements",len);
	else
	{
		p=root;
		temp=malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		
		while(i<loc)
		{
			p=p->right;
			i++;
		}
		
		temp->right=p->right;
		p->right->left=temp;
		temp->left=p;
		p->right=temp;
	}
}
