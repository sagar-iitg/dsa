#include<stdio.h>
int main()
{
	float x[10],y[10],prod,sum,a;
	int i,j,n;
	printf("\n data");
	scanf("%d",&n);
	printf("\n enter x y");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&y[i]);
		
	}
	printf("\n a");
	scanf("%f",&a);
	for(i=0;i<n;i++)
	{
		prod=1;
		for(j=0;j<n;j++)
		{
			if(j!=i)
			prod*=(a-x[j])/x[i]-x[j];
			
		}
		sum+=prod*y[i];
	}
	printf("\n %f",sum);
}
