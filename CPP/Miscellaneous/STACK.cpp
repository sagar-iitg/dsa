#include<stdio.h>
#include<stdlib.h>
void push(int *,int );
void pop(int*);
void peek(int *);
void display(int *);
int top=-1;
int main()
{
	int n,choice,*stack;
	stack=(int *)malloc(sizeof(int));
	printf("\n enter the size of stack ");
	scanf("%d",&n);
	while(1)
	{
		printf("\n 1.push\n 2.pop\n3.peek\n4.display\n5.exit\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1:push(stack,n);
			break;
			case 2:pop(stack);
			break;
			case 3:peek(stack);
			break;
			case 4:display(stack);
			break;
			case 5:exit(0);
			default:printf("\n choose appropriate choice");
		}
		
	}
	return(0);
}
void push(int *stack,int n)	
{
	int item;
	printf("\n insert elements in stack");
	scanf("%d",&item);
	if(top==n-1)
		printf("\n stack is overflow");
	else
	{top++;
	stack[top]=item;
	}
		
	
}
void pop(int *stack)
{
	int item;
	
	if(top==-1)
	printf("\n stack is empty");
	else
	{
	
		printf("\n the  deleted element is %d",stack[top]);
		top--;
	}
		
}
void peek(int *stack)
{
	if(top==-1)
	printf("\n stack is empty");
	else
	printf("\n peek element is:");
	printf("%d",stack[top]);
}
void display(int *stack)
{
	int  i;
	if(top==-1)
	printf("\n stack empty");
	
	for(i=top;i>=0; i--)
	{
		printf("%d\n",stack[i]);
	}
}
