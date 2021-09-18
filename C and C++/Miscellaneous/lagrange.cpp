#include<stdio.h>
#include<math.h>
int main()
{
	float x[10],y[10];
	int i,j,n;
	float a,prod,s=0.0;
	printf("\n enter no. of data points");
	scanf("%d",&n);
	printf("\n enter value of x");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("\n eneter the value of y");
	for(i=0;i<n;i++)
	scanf("%f",&y[i]);
	printf("\n enter the value of X\n");
	scanf("%f",&a);
	for(i=0;i<n;i++)
	{
		prod=1;	
		for(j=0;j<n;j++)
		{
		
			if(j!=i)
			
				prod*=(a-x[j])/(x[i]-x[j]);
			
		}
		
		s+=prod*y[i];
	}
	
	printf("%f",s);
	
}
