#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int data;
	struct nodetype *lchild;
	struct nodetype *rchild;
}node;
node *root=NULL;
void create();
void insert();
void display();
//void preorder();
//void postorder();
//void inorder();
int main()
{
	
	
}
void create()
{
	if(root==NULL)
	{
		node *newnode;
		newnode=(node *)malloc(sizeof(node));
		printf("\nEnter the data of newnode");
		scanf("%d",&newnode->data);
		newnode->lchild=NULL;
		newnode->rchild=NULL;
		root=newnode;
	}
	else
		printf("\nTree is Already Created.Go to insert item");
}
void insert()
{
	int item;
	node *ptr,*ptr1;
	ptr=root;
	if (root==NULL)
	{
		printf("\nFirst create your tree.Go to create tree.");
		exit(1);
	}
	printf("\nEnter the data:");
	scanf("%d",&item);
	while(ptr!=NULL)
	{
		if(item<ptr->data)
		{
			ptr1=ptr;
			ptr=ptr->lchild;
		}
		else
		{
			if(item>ptr->data)
			{
				ptr1=ptr;
				ptr=ptr->rchild;
			}
			else
			{	printf("\nItem already present");
				exit(1);
			}
		}


	}
	if(ptr==NULL)
	{
		node *newnode;
		newnode=(node *)malloc(sizeof(node));
		newnode->data=item;
		newnode->lchild=NULL;
		newnode->rchild=NULL;

		if (ptr1->data<item)
			ptr1->rchild=newnode;
		else
			ptr1->lchild=newnode;
	}



}
void display()
{
	int i=1;
	printf("\t\t\t%d\n",root->data);
	


}
