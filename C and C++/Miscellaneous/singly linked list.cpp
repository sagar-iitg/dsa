#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *start=NULL;
void create();
node *insertatbeg(node *);
node *insertatend(node *);
node *delfront(node *);
node *delend(node *);
void display();

void create()
{
	int num;
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	if(start==NULL)
	{
		printf("\n Enter DATA");
		scanf("%d",&num);
		newnode->data=num;
		start=newnode;
		newnode->next=NULL;
		
	}
	else
		printf("\n Linked list is already created");
}
node *insertatbeg(node *start)
{
	node *newnode;
	newnode=(node *)malloc(sizeof (node));
	printf("\n Enter the data\n");
	scanf("%d",&newnode->data);
	if(start==NULL)
	{
		start=newnode;
		newnode->next=NULL;
	}
	else
	{
		newnode->next=start;
		start=newnode;
	}
	return(start);
	
}
node *insertatend(node *start)
{
	node *newnode,*ptr;
	newnode=(node *)malloc(sizeof (node));
	printf("\n Enter the data\n");
	scanf("%d",&newnode->data);
	if(start==NULL)
	{
		start=newnode;
		newnode->next=NULL;
	}
	else
	{
		
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
		newnode->next=NULL;
		
	}
	return(start);
	
}
node *delfront(node *start)
{
	 node *ptr;
	if(start==NULL)
		printf("\n linked list is empty\n");
	else
	{
		ptr=start;
		start=start->next;
		printf("deleted element is %d",ptr->data);
		free(ptr);
	}
	return(start);
}
node *delend(node *start)
{
	node *ptr,*pptr;
	if(start==NULL)
		printf("\n Linked list is empty");
	else
	{
		ptr=start;
			if(ptr->next==NULL)
		{
				printf("\nThe deleted element is : %d",ptr->data);
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
			pptr->next=NULL;
			printf("\nThe deleted element is : %d",ptr->data);
			free(ptr);
		}
		
	}
	return(start);
	
		
	
}
void display()
{
	node *ptr;
	ptr=start;
	if(start==NULL)
		printf("\nLinked List is empty");
	else
	{
		printf("\nThe Linked List is :\n");
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
	printf("\n");
}
 
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Create\n2.Insert at front\n3.Insert at end\n4.Deletion at front\n5.Deletion at end\n6.display\n7.EXIT");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();
					break;
			case 2:start=insertatbeg(start);
				break;
			case 3:start=insertatend(start);
				break;
			case 4:start=delfront(start);
				break;
			case 5:start=delend(start);
				break;
			case 6:display();
					break;
			case 7:exit(0);
			default :printf("\n Wrong Choice\n");
		}
		
	}
	return 0;
}
