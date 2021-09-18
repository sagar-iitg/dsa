#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],n,i,temp,mode=0,max=0,pos,j;
	float mean,sum=0.0,y,median,sd,var,prod=0;
	printf("\n enter the size of array\n");
	scanf("%d",&n);
	printf("\n enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
		
	}

	for(i=0;i<n;i++)
		sum+=a[i];
	mean=sum/n;
	printf("\n mean");
	printf("%f",mean);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
		
	
		
		
		if(a[i]>a[j])
		{
		
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}

	if(n%2==0)
	
	y=(a[n/2]+a[(n+2)/2])/2;
	else
	y=a[(n+1)/2];
	printf("\n median");
	printf("%f",y);
	for(i=0;i<n;i++)
	{
		
		prod=prod+a[i]*a[i];
		
	}
	var=prod/n-mean*mean;
	sd=sqrt(var);
	printf("variance\n");
	printf("%f",var);
	printf("\n standard deviation\n");
	
	printf("\n %f",sd);
	for(i=0;i<n;i++)
	{
		mode=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			mode++;
			
		}
		if(mode>max)
		{
			max=mode;
			pos=i;
		}
	}
		printf("\n mode");
		
	
		printf("%d",a[pos]);
		
	
	
	
}
