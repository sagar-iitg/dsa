#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter the no. of lines to be printed\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=2*(n-i);j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	
}
