#include<stdio.h>
int sum(int);
int main()
{	int num;
	printf("Enter the number");
	scanf("%d",&num);
	printf("%d",(sum(num)-num));
	return 0;
}
int sum(int n)
{	if(n==0)
		return 0;
	return(n+sum(n%10));
}
