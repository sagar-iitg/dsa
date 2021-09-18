#include<stdio.h>
#include<stdlib.h>
struct nodetype
{
	int data;
	struct nodetype *next;
}node;
struct node *start=NULL;
int create()
{
	node *insertatbeg(node*);
	node *insertatend(node*);
	node *insertafter(node *);
	node *delfront(node*);
	node *delend(node*);
	node  *delafter(node*);
	int display();
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n 1.create\n");
		printf("\n 2.insert at beg\n");
		printf("\n 3.insert at end\n");
		printf("\n 4.insert at any position\n");
		printf("\n 5.delete at beg\n");
		printf("\n 6.delete at end\n");
		printf("\n 7.delete at any position\n");
		printf("\n 8.display\n");
		printf("\n 9.exit\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
	}
}

