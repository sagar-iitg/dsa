#include<stdio.h>
#include<stdlib.h>
void push(int *,int);
void pop(int *);
void peek(int *);
void isfull(int *,int);
void isempty(int *);
void display(int *);
int top=-1;
int main()
{	
	int n,choice;
	int *stack;
	printf("\nEnter the size of the stack:\n");
	scanf("%d",&n);
	stack=(int *)malloc(n*sizeof(int));
	while(1)
	{
		printf("\n1.push\n2.pop\n3.peek\n4.isfull\n5.isempty\n6.display\n7.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
				case 1:push(stack,n);
						break;
				case 2:pop(stack);
						break;
				case 3:peek(stack);
						break;
				case 4:isfull(stack,n);
						break;
				case 5:isempty(stack);
						break;
				case 6:display(stack);
						break;
				case 7:exit(0);
				default:printf("\nwrong choice");
		}
				
	}
	return 0;
	
}
void push(int *stack,int n)
{
		int item;
		if(top==n-1)
			printf("\nStack overflow");
		else
		{
			printf("\nEnter the element\n");
			scanf("%d",&item);
			top=top+1;
			stack[top]=item;
		}			
		
}
void pop(int *stack)
{
	int item;
	if(top==-1)
		printf("\nstack underflow");
	else
	{
		item=stack[top];
		printf("\n The deleted item is:%d",item);
		top--;
	}
}
void peek(int *stack)
{
	int item;
	item=stack[top];
	printf("\nThe top element is %d",item);
}
void isfull(int *stack,int n)
{
	if(top==n-1)
		printf("\nStack is full");
	else
		printf("\nNot full\n");
}
void isempty(int *stack)
{
	if(top==-1)
		printf("\nStack is empty");
	else
		printf("\n not empty\n");
}
void display(int *stack)
{	
	int i;
	if(top==-1)
	printf("\n no elements in stack");
	for(i=top;i>=0;i--)
	
		printf("\nelement(%d)=%d\n",i+1,stack[i]);
	
}
