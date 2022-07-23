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
node *insertafter(node *);
node *delfront(node *); 
node *delend(node *);
node *delafter(node *);
node *insertpos(node *);
node *delpos(node *);
node *mid(node *);
void display();
void greater();
int count;
void countt();
void reverse();
void sort();
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Create\n2.Insert at front\n3.Insert at end\n4.Insert after a node\n5.Insert at any position\n6.Deletion at front\n7.Deletion at end\n8.Deletion after a node\n9.Deletion at any point\n10.Display\n11.Exit\n12.Counting\n13.Reversing\n14.Greater\n15.Sort\n16.Middle\n");
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
			case 5:start=insertpos(start);
				break;
			case 6:start=delfront(start);
				break;
			case 7:start=delend(start);
				break;
			case 8:start=delafter(start);
				break;
			case 9:start=delpos(start);
				break;
			case 10:display();
				break;
			case 11:exit(0);
			case 12:countt();
				break;
			case 13:reverse();
				break;
			case 14:greater();
				break;
			case 15:sort();
				break;
			case 16:start=mid(start);
				break;
			default : printf("\nWrong Choice");
		}
	}
	return 0;
}
void create()
{
	int num;
	node *newnode,*ptr; 
	newnode=(node*)malloc(sizeof(node));
	if(start==NULL)
	{
		printf("\nEnter the data :\n");
		scanf("%d",&num);
		newnode->data=num;
		start=newnode;
		newnode->next=NULL;
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
node * insertatend(node *start)
{
	node *newnode,*ptr;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the data : ");
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
			ptr=ptr->next;
		ptr->next=newnode;
		newnode->next=NULL;
	}
	return(start);
}
node *insertafter(node *start)
{
	int value;
	node *newnode,*ptr,*pptr;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);
	printf("\nEnter the node after which you want to insert : ");
	scanf("%d",&value);
	ptr=start;
	pptr=ptr;
	if(start==NULL)
	{
		start=newnode;
		newnode->next=NULL;
	}
	else
	{
		if(ptr->data==value)
		{
			ptr=ptr->next;
			pptr->next=newnode;
			newnode->next=ptr;
		}
		else
		{
		while(pptr->data!=value)
		{
			pptr=ptr;
			ptr=ptr->next;
		}
		pptr->next=newnode;
		newnode->next=ptr;
		}
	}
	return(start);
}
node *insertpos(node *start)
{
	int pos,c=1,flag=0;
	node *newnode,*ptr,*pptr;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);
	if(start==NULL)
	{
		start=newnode;
		newnode->next=NULL;
	}
	else
	{
		printf("\nEnter the position at which you want to enter : ");
		scanf("%d",&pos);
		
		if(pos==1)
		{newnode->next=start;
		start=newnode;
			
		}
		else
		{ptr=start;
		
		while(ptr->next!=NULL)
		{
			pptr=ptr;
			ptr=ptr->next;
			c++;
			if(c==pos)
			{	
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			printf("\nEnter valid position\n");
			return(start);
		
		}
		pptr->next=newnode;//1
		newnode->next=ptr;//2
		//1-2 or 2-1 both same
	}
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
		printf("\nThe deleted element is : %d",ptr->data);
		free(ptr);
	}
	return(start);
}
node *delend(node *start)
{
	node *ptr,*pptr;
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
node *delafter(node *start)
{
	int value,flag=0;
	node *ptr,*pptr;
	printf("\nEnter the node after which you want to delete : ");
	scanf("%d",&value);
	ptr=start;
	pptr=ptr;
	if(start==NULL)
		printf("\nLinked List is empty");
	else
	{	if(ptr->data==value && start->next!=NULL)
		{
			ptr=ptr->next;
			printf("\nThe deleted element is : %d",ptr->data);
			pptr->next=ptr->next;//start->next=ptr->next both same
			free(ptr);
		}
		else 
		{
			while(ptr!=NULL)
			{
				if(ptr->data==value)
				{
					
					flag=1;
					break;
				}
				pptr=ptr;
				ptr=ptr->next;
			}
			if(flag==1)
			{
				if(ptr->next==NULL)
				
					printf("\nThis is the last element-there's no node after it.\n");
					
				else
				{
					pptr->next=ptr->next;
					printf("\nThe deleted element is : %d",ptr->data);
					free(ptr);
				}
			}
			else
				printf("\nEnter a valid node!!!!!!!\n");
		}
		
	}
	return(start);
}
node *delpos(node *start)
{
	int pos,c=1;
	node *ptr,*pptr;
	if(start==NULL)
	printf("\nLinked List is empty");
	else
	{
		printf("\nEnter the position at which you want to delete : ");
		scanf("%d",&pos);
		ptr=start;
		while(ptr->next!=NULL)
		{
			pptr=ptr; 
			ptr=ptr->next;
			c=c+1;
			if(c==pos)
				break;
		}
		pptr->next=ptr->next;
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
void countt() 
{	count=0;
	node *ptr;
	ptr=start;
	if(start==NULL)
		printf("\nThere are no nodes in the link list\n");
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			count++;
		}
		count++;
		printf("\nThere are %d nodes in the link list\n",count);
	} 
}
void reverse()
{
    node *prev,*curr,*next;
    prev=NULL;
    curr=start;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    start=prev;
    display();
}
void greater()
{
	int i=1,flag=0;
	node *ptr;
	ptr=start;
	if(start->next==NULL)
		{
			printf("\nThere is only one node,i.e;node[1]=%d\n",start->data);
			return;
		}
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		i++;
		if(ptr->data>start->data)
		{
			printf("\nnode[%d]=%d",i,ptr->data);
			flag=1;
		}
	}
	if(flag)
		printf("\nThe above given nodes are greater than node[1]=%d\n",start->data);
	else
		printf("\nnode[1]=%d is the greatest node\n",start->data);
	
}
	
void sort()
{
	int temp=0;
	node *ptr1,*ptr2;
	ptr1=start;
	while(ptr1->next!=NULL)
	{	ptr2=start;
		while(ptr2->next!=NULL)
		{
			if(ptr2->data>ptr2->next->data)
			{
				temp=ptr2->data;
				ptr2->data=ptr2->next->data;
				ptr2->next->data=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	display();
}
node *mid(node *start)
{	
	countt();
	int k=0,l=count/2;
	node *ptr;
	ptr=start;
	if(ptr->next==NULL)
	{
		printf("\nThe no of elements is : %d\nThe middle element is : %d",count,ptr->data);
		return(start);
	}
	while(ptr->next!=NULL)
	{
		k++;
		if(k==l)
			break;
		ptr=ptr->next;
	}
	if((count%2)!=0)
	{
		printf("\nThe no.of elements in the linked list:%d\nmid-element:%d",count,ptr->next->data);
	}
	else
		printf("\nThe no.of elements in the linked list:%d\nmid-element:%d and %d",count,ptr->data,ptr->next->data);
	return(start);
	
}
