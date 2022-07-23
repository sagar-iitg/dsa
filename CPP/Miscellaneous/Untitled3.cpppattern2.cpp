#include<stdio.h>
int main()
{
	int n,i,j,k,d;
	printf("enter n=");
	scanf("%d",&n);
	d=n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=d-1; j++)
		printf(" ");
		for(j=1; j<=i;j++)
		printf(" %d",i);
		printf("\n");
		d--;
	}
}
