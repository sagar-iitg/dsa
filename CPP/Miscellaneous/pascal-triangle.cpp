#include<stdio.h>
int factorial(int);
int main()
{
	int r,i,n,c,f1,f2,f3;
	printf("\n enter n=");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(c=0; c<=(n-i-2); c++)
		printf(" ");
		for(c=0;c<=i; c++)
		{
			f1=factorial(i);
			f2=factorial(c);
			f3=factorial(i-c);
			r=f1/(f2*f3);
			printf("%d",r);
			printf(" ");
		}
		printf("\n");
	}
}
	int factorial(int n)
	{
		int c,factorial=1;
		for(c=1; c<=n; c++)
		{
			factorial=factorial*c;
			return factorial;
		}
	}

