#include<stdio.h>
int main()
{	int i,j,r1,c1,r2,c2,a[10][10],b[10][10],det;
	printf("\nEnter the size of Matrix A:(rows,columns)\n");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the size of Matrix B:(rows,columns)\n");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{	printf("\nMatrix cannot be multiplied\n");
		return 1;
	}
	printf("\nEnter the elements of Matrix A:\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	printf("\nEnter the elements of Matrix B:\n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<c1;i++)
		
	
}
