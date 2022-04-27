#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};


int main()
{
	int a=1;
	struct node *head=0;
	struct node *newnode;
	struct node *temp;
	
	while(a)
	{
	
	printf("enter your data");
	newnode=(struct node *)malloc(sizeof(struct node));
	
	
	scanf("%d",&newnode->data);
	
	if(head==0)
	{
		head=newnode;
		temp=newnode;
	
	}
	else
	{
		
		temp->next=newnode;
		temp=newnode;
	}
		
	printf("do you want more to enter");
	scanf("%d",&a);
	
    }
    newnode->next=0;
    
    
    
    printf("enter data for newnode at start");
    
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    temp=head;
    newnode->next=temp;
    head=newnode;
    
    
    temp=head;
    while(temp!=0)
    {
    	printf("%d\n",temp->data);
    	
    	temp=temp->next;
	}
	
	
	
}