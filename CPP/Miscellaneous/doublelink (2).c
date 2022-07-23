#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int data;
	struct nodetype *next;
	struct nodetype *prev;
}node;
node *start=NULL;
void create();
node *insertatbeg(node *);
node *insertatend(node *);
node *insertafter(node *);
node *delfront(node *);
node *delend(node *);
node *delafter(node *);
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Create\n2.Insert at front\n3.Insert at end\n4.Insert after a node\n5.Deletion at front\n6.Deletion at end\n7.Deletion after a node\n8.Display\n9.Exit\n");
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
			case 4:start=insertafter(start);
				break;
			case 5:start=delfront(start);
				break;
			case 6:start=delend(start);
				break;
			case 7:start=delafter(start);
				break;
			case 8:display();
				break;
			case 9:exit(0);
			default : printf("\nWrong Choice");
		}
	}
	return 0;
}
void create()
{
	node *newnode,*ptr; 
	newnode=(node*)malloc(sizeof(node));
	if(start==NULL)
	{
		printf("\nEnter the data :\n");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		start=newnode;
	}
	else
		printf("\nThe linked list is already created");
}
node * insertatbeg(node *start)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);
	if(start==NULL)
	{
		newnode->prev=NULL;
		newnode->next=NULL;
		start=newnode;
	}
	else
	{
		start->prev=newnode;
		newnode->next=start;
		newnode->prev=NULL;
		start=newnode;
	}
	return(start);
}
node * insertatend(node *start)
{
	node *newnode,*ptr;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);
	if(start==NULL)
	{
		newnode->prev=NULL;
		newnode->next=NULL;
		start=newnode;
	}	
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=newnode;
		newnode->prev=ptr;
		newnode->next=NULL;
	}
	return(start);
}
node *insertafter(node *start)
{
	int value;
	node *newnode,*ptr;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);
	printf("\nEnter the node after which you want to insert : ");
	scanf("%d",&value);
	if(start==NULL)
	{
		newnode->prev=NULL;
		newnode->next=NULL;
		start=newnode;
	}
	else
	{
		ptr=start;
		while(ptr->data!=value)
			ptr=ptr->next;
		newnode->prev=ptr;
		newnode->next=ptr->next;
		ptr->next->prev=newnode;
		ptr->next=newnode;
	}
	return(start);
}
node *delfront(node *start)
{
	node *ptr;
	if(start==NULL)
		printf("\nLinked List is empty");
	else
	{
		ptr=start;
		start=start->next;
		start->prev=NULL;
		printf("\nThe deleted element is : %d",ptr->data);
		free(ptr);
	}
	return(start);
}
node *delend(node *start)
{
	node *ptr;
	if(start==NULL)
		printf("\nLinked List is empty");
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
			ptr=ptr->next;
		(ptr->prev)->next=NULL;
		printf("\nThe deleted element is : %d",ptr->data);
		free(ptr);
		}
	}
	return(start);
}
node *delafter(node *start)
{ 
	node *ptr;
	int value;
	if(start==NULL)
		printf("\nThe Link List is empty\n");
	else
	{
		printf("\nEnter the node after which you want to delete:\n");
		scanf("%d",&value);
		ptr=start;
		while(ptr->data!=value)
			ptr=ptr->next;
		ptr=ptr->next;
		(ptr->prev)->next=ptr->next;
		printf("\nThe deleted element is : %d",ptr->data);
		free(ptr);	
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



