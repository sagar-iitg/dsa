#include<stdio.h>
#include<stdlib.h>
void insert(int *,int);
void del(int *);
void ffront(int *);
void rrear(int *);
void display(int *);
int front=-1;
int rear=-1;
int main()
{	
	int n,choice;
	int *queue;
	printf("\nEnter the size of the queue:\n");
	scanf("%d",&n);
	queue=(int *)malloc(n*sizeof(int));
	while(1)
	{
		printf("\n1.insert\n2.delete\n3.front\n4.rear\n5.display\n6.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert(queue,n);
					break;
			case 2:del(queue);
					break;
			case 3:ffront(queue);
					break;
			case 4:rrear(queue);
					break;
			case 5:display(queue);
					break;
			case 6:exit(0);
			default:printf("\nEntered wrong choice\n");
			
		}
	}
	return 0;
}
void insert(int *queue,int n)
{
	int item;
	if(rear<n-1)
	{
		printf("\nEnter the element\n");
		scanf("%d",&item);
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else
			rear=rear+1;
		queue[rear]=item;
	}
	else
		printf("\nQueue Overflow");
}
void del(int *queue)
{
	int item;
	if(front!=-1)
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
			front=front+1;
		printf("\nThe deleted item is:%d",item);
		
	}
	else
		printf("\nQueue underflow\n");
}
void ffront(int *queue)
{
	if(front==-1)
	printf("\n queue empty");
	else
	printf("\nThe front element is:%d",queue[front]);
}
void rrear(int *queue)
{	if(rear==-1)
	printf("\n queue empty");
	else
	printf("\nThe rear element is:%d",queue[rear]);
}
void display(int *queue)
{
	int i;
	for(i=rear;i>=front;i--)
	{	if(i==-1)
			printf("\nempty queue\n");
		else
			printf("\nElement[%d]=%d\n",i+1,queue[i]);
	}
		
}
