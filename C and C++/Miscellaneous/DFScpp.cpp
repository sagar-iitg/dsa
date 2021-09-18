#include<stdio.h>
#include<stdlib.h>
int pop(int stack[],int top);
int main()
{
	int i,j,n,adj[10][10],status[10],visited[10];
	int start,top=-1,count=0,stack[20];
	printf("\n enter the no.of nodes\n");
	scanf("%d",&n);
	printf("\n enter adjacency matrix");
	printf("\n node x:node 1 node 2 ........node n\n");
	printf("\n enter '1' if node 'x' is adjacent to node 1 else 0 and so on\n");
	for(i=1;i<=n;i++)
	{
		printf("\n node %d:",i);
		for(j=1;j<=n;j++)
			scanf("%d",&adj[i][j]);
			
	}
	printf("\n adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		printf("%d",adj[i][j]);
		printf("\n");
	}
	for(i=1;i<=n;i++)
		status[i]=1;

	top++;
	stack[top]=start;
	status[start]=2;
	while(top<=n)
	{
		printf("h");
		visited[++count]=pop(stack,top);
		status[visited[count]]=3;
		for(j=1;j<=n;j++)
		{
			if(adj[visited[count]][j]==1&&status[j]==1)
			{
				stack[++top]=j;
				status[j]=2;
				
			}
		}
		
		}	
	

printf("\n depth first search\t");
				for(i=1;i<n;i++)
				printf("%d ",visited[i]);
}
				
int pop(int stack[],int top)
{
	return stack[top--];
}
