#include<stdio.h>
int sum(int);
int main()
{	int num;
	printf("Enter the number");
	scanf("%d",&num);
	printf("%d",(sum(num)));
	return 0;
}
int sum(int n)
{	int d;
	d=n%10;
	n=n/10;
	if(d==0)
		return 0;
	return(d+sum(n));
}
