#include<stdio.h>
int main()
{
	int arr[100][100],i,j,r,c;
	printf("\n enter the size of array\n");
	scanf("%d %d",&r,&c);
	printf("\n enter elements of matrix\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		scanf("%d",&arr[i][j]);
		
		
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		
			printf(" %d",arr[i][j]);
			printf("\n");
		
	}
	return 0;
	
	
}
	

