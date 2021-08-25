#include<stdio.h>
#include<conio.h>
void append(void);
int length(void);
void addatBegin();
struct node
{
	int data;
	struct node *link;
}*root;

int main(){
    int len;
	append();
	append();
	append();
	len=length();
	printf("Length of linked list is %d",len);
	addatBegin();
	len=length();
	printf("Now the length is %d",len);
    getch();
	return 0;


}
void append(void){
	struct node *temp;
	temp = malloc(sizeof(struct node));
	printf("Enter number: ");
	scanf("%d",&temp->data);
	temp->link=0;
	
	if(root==NULL)
		root=temp;
	else{
		struct node *p;
		p=root;
		while(p->link!=0){
			p=p->link;
		}
		p->link=temp;
	}
}

int length(void){
	int count=0;
	struct node *temp;
	temp=malloc(sizeof(struct node));
	
	temp=root;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}
void addatBegin()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	
	printf("\nEnter elemnet: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
		root=temp;
	else{
		temp->link=root;
		root=temp;
	}
}
