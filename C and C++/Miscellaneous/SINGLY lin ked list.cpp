#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int data;
	struct nodetype *next;
}node;
void create();
node *insertatbeg(node *);
node *insertatend(node *);
void display();
node *start=NULL;
int main()
{
	int choice;
	while(1)
	{
		printf("\n 1.create\n 2.insert at beg\n 3. insert at end\n 4.exit\n5.display\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();
			break;
			case 2:start=insertatbeg(start);
			break;
			case 3:start=insertatend(start);
			break;
			case 4:exit(0);
			case 5:display();
			break;
			default:printf("\n wrong choice\n");
			
		}
	}
}
void create()
{
	int num;
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	if(start==NULL)
	{
	
		printf("\n enter data\n");
		scanf("%d",&num);
		newnode->data=num;
		start=newnode;
		newnode->next=NULL;
		
	}
	else
	printf("\n ll created\n");
}
node *insertatbeg(node *)
{
	node *newnode,*ptr;
	
	newnode=(node *)malloc(sizeof(node));
	printf("\n enter data");
	scanf("%d",&newnode->data);
	if(start==NULL)
		printf("\n first create node\n");

	
	else
	{
	
		newnode->next=start;
		start=newnode;
	
	}

	return(start);
		
	
	
}
node *insertatend(node *)
{
	node *newnode,*ptr;
	newnode=(node *)malloc(sizeof(node));
		printf("\n enter the data\n");
			scanf("%d",&newnode->data);
	if(start==NULL)
		printf("\n first create node\n");


	else
	ptr=start;
		while(ptr->next!=NULL)
		ptr=ptr->next;
		ptr->next=newnode;
		newnode->next=NULL;
	return(start);
	
	
}
void display()
{
	node *ptr;
	ptr=start;
	if(start==NULL)
	printf("\n ll empty\n");
	else
	{
		printf("\n ll is:\n");
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->next;
		}
	}
	printf("\n");
	

}
		

