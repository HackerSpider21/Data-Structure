#include<stdio.h>
#include<stdlib.h>
// CREATING NODES
struct node
{
	int data;
	struct node *next;
};


int main()
{
	int a=1; //A=1 IS compulsory otherwise code will termonte soon
	struct node *head=0;
	struct node *newnode;
	struct node *temp;
	
	while(a)
	{
	
	printf("enter your data");
	newnode=(struct node *)malloc(sizeof(struct node)); //creating nodes
	
	
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
		
	printf("do you want more to enter"); // asking user for more or nore
	scanf("%d",&a);
	
    }

    
    newnode->next=0;  // last node->next is 0
    

    
  
    
    
    temp=head;   // node travesre 
    while(temp!=0)
    {
    	printf("%d\n",temp->data);
    	
    	temp=temp->next;
	}
	
	
	
}