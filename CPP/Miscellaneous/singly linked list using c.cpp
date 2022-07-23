#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *START=NULL;
struct node* createnode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return(n);
}
void insertnode()
{
	struct node *temp,*t;
	temp=createnode();
	printf("ENter values ");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(START==NULL)
	START=temp;
	else
	{
		t=START;
		while(t->link!=NULL)
		t=t->link;
		t->link=temp;
	}
	
}
void deletenode()
{
	int data;
	struct node *r;
	if(START==NULL)
	printf("list is empty");
	else
	{
		r=START;
		START=START->link;
		free(r);
	}
	
}
void viewlist()
{
	struct node *t;
	if(START==NULL)
	printf("\n List is Empty");
	else
	{
		t=START;
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
		}
	}
}
int menu()
{
	int ch;
	printf("\n1.Add value to the list");
	printf("\n2 Delete first value");
	printf("\n3 view list ");
	printf("\n4exit");
	printf("\nEnter your choice ");
	scanf("%d",&ch);
	return(ch);
	
}


int main()
{
	while(1)
	switch(menu())
	{
		case 1:insertnode();
				break;
		case 2:deletenode();
				break;
	
		case 3:viewlist();
				break;
		case 4: exit(1);
		default:
			printf("invalid");
	}

}
