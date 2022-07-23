#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node* start=NULL;

node* insert();
void countlarge();
node *deletelargest();
void display();
int main()
{	
	int ch;
	while(1)
	{
		printf("\n**Menu**\n1.create and insert node\n2.Find the total number of nodes and the largest\n3.Delete largest\n4.Display\n5.Exit\n");
		printf("\nEnter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start=insert();
				break;
			case 2:countlarge();
				break;
			case 3:start=deletelargest();
				break;
			case 4:display();
				break;
			case 5:exit(1);
			default:printf("Enter chopice between (1-5)");
		}
}
	
return 0;
}
node *insert()
{	
	int item;
	node *newnode;
	printf("\nEnter the data value");
	scanf("%d",&item);
	newnode=(node *)malloc(sizeof(node));
	newnode->data=item;
	if(start==NULL)
	{
		start=newnode;		
		start->next=NULL;
	}
	else
	{
		newnode->next=start;
		start=newnode;
	}
	return start;
}
void countlarge()
{
	int c=0,d,l;
	node *ptr=start;
	if(start==NULL)
	{
		printf("\nThe linked list is empty");
		return;
	}
	l=start->data;
	while(ptr->next!=NULL)
	{
		c++;
		ptr=ptr->next;
		d++;
		if(ptr->data>l)
			l=ptr->data;
	}
	c++;
	printf("\nTotal number of nodes=%d\nLargest=%d",c,l);
}
void display()
{
	node *ptr;
	ptr=start;
	if(start==NULL)
	{
		printf("\nEmpty linked list");
		return;
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}  
}
node *deletelargest()
{
	int l,last;
	node *ptr=start,*pptr;
	if(start==NULL)
	{
		printf("\nThe linked list is empty");
		return start;
	}
	l=start->data;
	if(start==NULL)
	{
		printf("\nThe linked list is empty");
		return start;
	}
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		if(ptr->data>l)
			l=ptr->data;
	}
	last=ptr->data;
	
	if(start->data==l) //largest is at start
	{
		ptr=start;
		start=start->next;
		free(ptr);
		
	}
	else 
	{	if(1)
		{	ptr=start;
			pptr=start;
			while(ptr->next!=NULL)
			{
				pptr=ptr;
				ptr=ptr->next;
				if(ptr->data==l)
				break;
			}
			pptr->next=ptr->next;
			free(ptr);
		}
		
		
		else if(last==l)
		{
			pptr=start;
			ptr=start;
			while(ptr->next!=NULL)
			{
				pptr=ptr;
				ptr=ptr->next;
			}
			pptr->next=NULL;
			free(ptr);
		}
			
	}
			
		return start;

}
