#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1;
void push(int ele)
{
	if(top==size-1)
	printf("stack is full");
	else
	stack[++top]=ele;
}
int pop()
{
	if(top==-1)
	{
		printf("\n empty");
		return -1;
	}
	else
	return stack[top--];
}
void display()
{
	int i;
	for(i=top; i>=0; i--)
	printf("%d \t",stack[i]);
printf("\n");
	
	
}
int main()
{
	int ch,ele,op=0;

	do
	{
		printf("\n enter the option 1.push\t 2.pop\t 3.display\t 4.exit. \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n enter the element\n");
			scanf("%d",&ele);
			push(ele);
			break;
			case 2: ele=pop();
			printf("\n %d ",ele);
			break;
			case 3: display();
			break;
			case 4: op=1;
			break;
			default : printf("\n please Enter appropriate choice");
			break;
			
				
		
		}
	}
	while(op!=1);
}
