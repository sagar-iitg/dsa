#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j;
	float a[10][10],x,h,u,p=1,sum=0.0;
	printf("\n enter the no.of elements\n");
	scanf("%d",&n);
	printf("\n enter the value of x\n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i][0]);
	printf("\n enter the value of y\n");
		
	for(i=0;i<n;i++)
	scanf("%f",&a[i][1]);
  for(j=2;j<=n;j++)
	{
		for(i=0;i<n-j+1;i++)
		{
			a[i][j]=a[i+1][j-1]-a[i][j-1];
		}
	}
	printf("\n table \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		printf(" %f",a[i][j]);
		printf("\n");
		
	}
	h=a[1][0]-a[0][0];
	printf("\n enter the value of x\n");
	scanf("%f",&x);
	u=(x-a[0][0])/h;
	sum=a[0][1];
	for(i=1;i<n;i++)
	{
		p=(p)*(u-i+1)/i;
		sum=sum+p*a[0][i+1];
	}
	printf("%f",sum);
	
	
}
