#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("\n enter no. of terms");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<i; j++)
		printf(" ");
		for(k=i; k<=n; k++)
			
			printf("*");
			printf("\n");
		
	}
	
}
