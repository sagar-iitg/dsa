#include<stdio.h>
int main()
{	int a[10][10],b[10][10],c,i,j,m,n,p,q;
	
	printf("\nhey guy just enter the size of 1st matrix a:(row,column)\n");
	scanf("%d %d",&m,&n);
	printf("\nhey guy just enter the size of 2nd matrix b:(row,column)\n");
	scanf("%d %d",&p,&q);
    printf("\n1st matrix elements are:\n");
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
    }
	printf("\n2nd matrix elements are:\n");
	for(i=0;i<p;i++)
    {	for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
    }
	if(n==p)
		printf("\nMatrix can be added congrats!!\n");
	else
		printf("\nMatrix cannot be added\n");
	for(i=0;i<m;i++)
	{	for(j=0;j<q;j++)
		{	c=0;
			c=c+(a[i][j]*b[j][i]);
			printf("%d ",c);
	    }
		printf("\n");
    }
	return 0;
    
}
