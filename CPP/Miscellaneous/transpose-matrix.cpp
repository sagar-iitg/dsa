#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r,c;
	printf("\nenter no. of rows and column\n");
	scanf("%d %d",&r,&c);
	printf("\n enter elements\n");
	for(i=0; i<r; i++)
	
		for(j=0; j<c; j++)
		scanf("%d",&a[i][j]);
	
	for(i=0; i<r; i++)
	
		for(j=0; j<c; j++)
		b[i][j]=a[j][i];
	
	printf("\n original matrix\n");
	for(i=0; i<r; i++)
	{
	
	
		for(j=0; j<c; j++)
		printf("%d",a[i][j]);
	
		printf("\n");
	}
	printf("\ntranspose matrix:\n");
	for(i=0; i<r; i++)
	{
	
		for(j=0; j<c; j++)
		printf("%d",b[i][j]);
		printf("\n");
	}
}

