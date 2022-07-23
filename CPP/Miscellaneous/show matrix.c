#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j;
	printf("enter  the size of array\n");
	scanf("%d%d",&r,&c);
	printf("enter the set of a no.\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("a:\n");
	for(i=0; i<r;i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d",a[i][j]);
			
			
		}
		printf("\n");
	}
	return 0;
}
