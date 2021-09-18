#include<stdio.h>
void compadd(int,int,int,int);
void compsubstract(int,int,int,int);
void compmultiply(int,int,int,int);
int main()
{	int ch,a,b,x,y;
	printf("\nWELCOME TO COMPLEX MENU");
	printf("\nEnter the 1st complex number(a,b):");
	scanf("%d %d",&a,&b);
	printf("\nEnter the 2nd complex number(x,y):");
	scanf("%d %d",&x,&y);
	printf("\n1.COMPLEX ADDITION");
	printf("\n2.COMPLEX SUBSTRACTION");
	printf("\n3.COMPLEX MULTIPLICATION");
	printf("\nEnter your choice(1-3)");
	scanf("%d",&ch);
	switch(ch)
	{	
		case 1:compadd(a,b,x,y);
			   break;
		case 2:compsubstract(a,b,x,y);
			   break;
		case 3:compmultiply(a,b,x,y);
			   break;
		default:printf("sorry wrong choice");
			   break;
    } 
		
	return 0;		
}
void compadd(int a,int b,int x,int y)
{	printf("\nADDITION:(%d + i%d)+(%d + i%d):(%d + i%d)\n",a,b,x,y,a+x,b+y);
}
void compsubstract(int a,int b,int x,int y)
{	printf("\nSUBSTRACTION:(%d + i%d)-(%d + i%d):(%d + i%d)\n",a,b,x,y,a-x,b-y);
}
void compmultiply(int a,int b,int x,int y)
{	printf("\nMULTIPLICATION:(%d + i%d)*(%d + i%d):(%d)\n",a,b,x,y,a*x-b*y);
}

