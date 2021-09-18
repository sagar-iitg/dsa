#include<stdio.h>
int main()
{
	int m1[10][10],m2[10][10],m[10][10]={0},i,j,k,r1,c1,r2,c2;
	printf("Enter the size of m1");
	scanf("%d %d",&r1,&c1);
	printf("Enter the size of m2");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{	printf("\nMatrix cannot be multiplied\n");
		return 0;
    }
	printf("enter the set of a no. for m1 mmatrix \n");
	for(i=0;i<r1; i++)
	{	for(j=0; j<c1; j++)
			scanf("%d",&m1[i][j]);
	
	}
	printf("enter the set of a no. for m2 matrix\n");
	for(i=0; i<r2; i++)
	{
		for (j=0; j<c2; j++)
			scanf("%d",&m2[i][j]);
		
	}
	printf("m1:\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1;  j++)
		{	printf("%d ", m1[i][j]);
			
		}
		printf("\n");
	}
	printf("m2:\n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%d ",m2[i][j]);
	
		}
		printf("\n");
	}
	printf("Multiplication of the given matrix is:\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			for(k=0;k<c1;k++)
				m[i][j]+=m1[i][k]*m2[k][j];
			printf("%d ",m[i][j]);
			
		}
		printf("\n");
		
		
	}
	return 0;
	
	
	}
	

