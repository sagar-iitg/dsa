#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	float a[10][10],temp,x[10],sum=0;
	printf("\n enter the no. of eqn");
	scanf("%d",&n);
	printf("\n eneter augumented matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		scanf("%f",&a[i][j]);
	}
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
		
			temp=a[i][k]/a[k][k];
			for(j=0;j<=n;j++)
			a[i][j]-=temp*a[k][j];
		}
	}
	printf("\n upper triangular matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%5.2f",a[i][j]);
			
		}
		printf("\n");
	}
	
	
}
