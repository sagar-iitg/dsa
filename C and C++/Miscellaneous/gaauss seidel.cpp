#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,c=0;
	float a[10][10],ox[10]={0},nx[10]={0},s;
	printf("\n enter no. of eqn");
	scanf("%d",&n);
	printf("\n enter augumented matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
	}
	do 
	{	
	
	
		for(i=1;i<=n;i++)
		{
			ox[i]=nx[i];
			s=0;
			
			for(j=1;j<=n;j++)
				
				if(i!=j)
				s+=a[i][j]*ox[j];
			
			nx[i]=(a[i][n+1]-s)/a[i][i];
			
			
		}
		c=0;
		for(i=1;i<=n;i++)
		{
			if(fabs(ox[i]-nx[i])>0.0001)
			{
				c=1;
				
			}
		}
	}while(c==1);
	for(i=1;i<=n;i++)
	printf("\n the values of %d is %f",i,nx[i]);
	
}
