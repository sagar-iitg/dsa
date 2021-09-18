#include<stdio.h>
#include<stdlib.h>
int i,j;
typedef struct bst
{
 int data;
 struct bst *lcd;
 struct bst *rcd;
}bst;
bst *root=NULL,*newnode,*ptr,*ptr1,*parent;
bst * creat();
bst * insrt();
void postorder(bst *);
void preorder(bst *);
void inorder(bst *);

void main()
{
 int op;
	while(1)
	 {
		printf("\n1.Creat\n2.Insert\n3.Inorder Display\n4.Preorder Display \n5.Postorder Display\n6.Exit\nEnter your choice: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1: root=creat();
				break;
			case 2:	root=insrt();
				break;
			case 3:	inorder(root);
				break;
			case 4:	preorder(root);
				break;
			case 5:	postorder(root);
				break;
			case 6: exit(1);
			default:printf("Wrong Input");
		  }
	 }
}

bst * creat()
{
	bst *newnode;
	newnode=(bst *)malloc(sizeof(bst));
	root=newnode;
	printf("Enter the element : ");
	scanf("%d",&newnode->data);
	newnode->lcd=NULL;
	newnode->rcd=NULL;
	return root;
}
bst * insrt()
{
	int flag=-1,itm;
	printf("\nEnter the data: ");
	scanf("%d",&itm);
	ptr=root;
	if(ptr==NULL)
	{
		newnode=(bst*)malloc(sizeof(bst));
		newnode->data=itm;
		newnode->lcd=NULL;
		newnode->rcd=NULL;
		root=newnode;
	}
		else
		{
			while(ptr!=NULL&&flag==-1)
			{
				if(itm>ptr->data)
				{
				 parent=ptr;
				 ptr=ptr->rcd;

				}
					else if(itm<ptr->data)
					{
						 parent=ptr;
						 ptr=ptr->lcd;
					}
						else if(itm==ptr->data)
							{
								flag=1;
								printf("The data is already present in the BST");
							}
			}
			if(flag!=1)
			{
			 newnode=(bst*)malloc(sizeof(bst));
			newnode->data=itm;
			newnode->lcd=NULL;
			newnode->rcd=NULL;
				if(itm>parent->data)
				parent->rcd=newnode;
					else parent->lcd=newnode;
			}

		}
	return root;
}

void inorder(bst *ptr)
{

	if(ptr==NULL)
	  return;
  inorder(ptr->lcd);
  printf("%d\t",ptr->data);
  inorder(ptr->rcd);

}



void postorder(bst *ptr)
{
  if(ptr==NULL)
  return;
  postorder(ptr->lcd);
  postorder(ptr->rcd);
  printf("%d\t",ptr->data);
}


void preorder(bst *ptr)
{
  if(ptr==NULL)
  return;
  printf("%d\t",ptr->data);
  preorder(ptr->lcd);
  preorder(ptr->rcd);
}