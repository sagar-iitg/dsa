#include<stdio.h>
#include<stdlib.h>
typedef struct  nodetype
{
	int data;
	struct nodetype *next; 
}node;
void push();
void pop();
void peek();
void display();
node *start=NULL;
int n;
int main()
{
	int choice;
	printf("\n enter size of the stack\n");
	scanf("%d",&n);
	while(1)
	{
		printf("\n 1.push\n2.pop\n3.peek\n4.display\n5.exit\nenter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5:exit(0);
			default:printf("\n wrong choice");
		}
	}
	return 0;
}
void push()
{
	node *newnode,*ptr;
	int c=1;
	newnode=(node *)malloc(sizeof(node));
	if(start==NULL)
	{
		printf("\n enter elements:\n");
		scanf("%d",&newnode->data);
		start=newnode;
		newnode->next=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			c++;
			ptr=ptr->next;
		}
		c++;
		
		if(c>n)
		printf("\n stack overflow\n");
		else
		{
			printf("\n enter elements");
			scanf("%d",&newnode->data);
			ptr->next=newnode;
			newnode->next=NULL;
		}
	}
}
void pop()
{
	node *ptr,*pptr;
	if(start==	NULL)
		printf("\n stack underflow");
	else
	{
		ptr=start;
		if(ptr->next==NULL)
		{
			
			printf("\n %d\n",ptr->data);
			free(ptr);
			start=NULL;
		
		}
		else
		{
			while(ptr->next!=NULL)
			{
				pptr=ptr;
				ptr=ptr->next;
			}
			printf("\n %d",ptr->data);
			free(ptr);
			pptr->next=NULL;
		}
		
	}
	
}
void peek()
{
	node *ptr;
	if(start==NULL)
		printf("\n stack is empty");
	else
		
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				
				ptr=ptr->next;
			}
			printf("\n %d",ptr->data);
			
			
		}
	
}
void display()
{
	node *ptr;
	if(start==NULL)
		printf("\n stack is empty\n");
	else
	{
	
		ptr=start;
		while(ptr->next!=NULL)
		{
			printf("\n%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
