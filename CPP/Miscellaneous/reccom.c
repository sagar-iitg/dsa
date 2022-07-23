#include<stdio.h>
int fact(int);
int main()
{	int n,r;
	printf("Enter the values of n & r\n");
	scanf("%d %d",&n,&r);
	printf("Answer:%d",(fact(n)/(fact(r)*fact(n-r))));
	return 0;
}
int fact(int n)
{	
	if(n==1 || n==0)
		return 1;
	return(n*fact(n-1));
}
