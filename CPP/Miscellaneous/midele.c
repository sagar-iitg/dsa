#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int data;
	struct nodetype *next;
}node;
node *start=NULL;
node *create(node *);
node *insertatend(node *);
node *givemidelement(node *);
void display();
int main()
{	
	int ch;
	while(1)
	{
		printf("\nmenu\n1.create linked list\n2.insert at end\n3.give middle element\n4.display\n5.exit");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start=create(start);
					break;
			case 2:start=insertatend(start);
					break;
			case 3:start=givemidelement(start);
					break;
			case 4:display();
					break;
			case 5:exit(0);
			default:printf("\nwrong choice");
		
		}
    }
    return 0;
}
node *create(node *start)
{
	if(start==NULL)
	{	node *newnode;
		newnode=(node *)malloc(sizeof(node));
		printf("\nEnter the data");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		start=newnode;
		
	}
	else
		printf("\nlinked list is already created\n");
	return(start);
}
node *insertatend(node *start)
{
	if(start==NULL)
		printf("\ncreate linked list first");
	else
	{
	node *newnode,*tmp;
	tmp=start;
	newnode=(node *)malloc(sizeof(node));
	printf("\nEnter the data:");
	scanf("%d",&newnode->data);
	while(tmp->next!=NULL)
		{
		tmp=tmp->next;
	    }
	tmp->next=newnode;
	newnode->next=NULL;
	
	}
	return(start);
}
node *givemidelement(node *start)
{	int c=0;
	node *p1,*p2;
	p1=start;
	p2=start;
	if(start->next==NULL)
	{
		printf("\nThere is only one element,i.e;%d",start->data);
		return(start);
	}
	while(p2->next->next!=NULL)
	{
		p1=p1->next;
		p2=p2->next->next;
		c++;
		if(p2->next==NULL)
			break;
	}
	if(p2->next!=NULL)
		printf("\nThe no.of elements in the linked list:%d\nmid-element:%d & %d",2*c+2,p1->data,p1->next->data);
	else
		printf("\nThe no.of elements in the linked list:%d\nmid-element:%d",2*c+1,p1->data);
	return(start);
	
}
void display()
{
	if(start==NULL)
		printf("\nempty linked list\n");
	else
	{
		node *temp;
		temp=start;
		while(temp!=NULL)
		{
			printf("\t%d",temp->data);
			temp=temp->next;
		}
	}
	
}
