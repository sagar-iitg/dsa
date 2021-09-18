#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("enter num=");
	scanf("%d",&num);
	printf("factorial of a no. %d is %d",num,fact(num));
	return 0;
}
int fact(int n)
{
	if(n==0)
	return 1;
	return(n*fact(n-1));
}
