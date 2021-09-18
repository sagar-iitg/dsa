#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r1,c1,r2,c2,c[10][10]={0},k;
	printf("enter no. of rows and columns 1\n");
	scanf("%d %d",&r1,&c1);
	printf("enter no. of rows or column 2\n");
	scanf("%d %d",&r2,&c2);
	if(c1==r2)
	{
	
	
		printf("1st matrix\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("2nd matrix\n");
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
			scanf("%d",&b[i][j]);
		}
		printf("\n multipliction\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				for(k=0; k<r2; k++)
				
					c[i][j]+=a[i][k]*b[k][j];
					printf(" %d",c[i][j]);
				
				
				
			}
			
				
				
			
		
		printf("\n");
		}
	}
	else
	printf("not");
}
	

	


