#include<stdio.h>
#include<stdlib.h>
void push(int *,int);
void pop(int *);
void peek(int *);
void display(int *);
int top=-1;
int main()
{
	int n,choice,*stack;
	stack=(int *)malloc(sizeof(int));
	printf("\n size of the stack\n");
	scanf("%d",&n);
	while(1)
	{
		printf("\n 1.push\n2.pop\n3.peek\n4.display\n5.exit\nenter your choice\n");
		scanf("%d",&choice);
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
	return 0;
}
void push(int *stack,int n)
{
	int item;
	printf("\n insert elements in stack\n");
	scanf("%d",&item);
	if(top==n-1)
		printf("\n stack overflow");
	else
	{
	
		top++;
		stack[top]=item;
	}
}
void pop(int *stack)
{
	if(top==-1)
	printf("\n stack underflow");
	else
	{
	
		printf("\n the deleted element is:\n");
		printf("\n %d",stack[top]);
		top--;
	}
	
}
void peek(int *stack)
{
	if(top==-1)
		printf("\n stack empty\n");
	else
	printf("\n %d",stack[top]);
}
void display(int *stack)
{
	int i;
	if(top==-1)
	printf("\n stack empty");
	else
	{
		for(i=top;i>=0;i--)
		printf("\n %d\n",stack[i]);
	}
}
	
	
	


		
	
	


