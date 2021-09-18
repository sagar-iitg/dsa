#include<stdio.h>
int main()
{
	int queue[100],front=5,rear,m,n,temp,i,j;
	printf("\nEnter the value of m and n\n");
	scanf("%d %d",&m,&n);
	rear=front+m;
	printf("\nEnter the data of the queue\n");
	for(i=front;i<rear;i++)
		scanf("%d",&queue[i]);
	temp=queue[front];
	for(j=0;j<n;j++)
	{	for(i=front;i<rear-1;i++)
			queue[i]=queue[i+1];
	}
	queue[rear-1]=temp;
	printf("%d",queue[front]);
	return 0;
	
}
