#include<stdio.h>
int main()
{
	int a=0,b=1,sum,n,i;
	printf("enter the terms");
	scanf("%d",&n);
	printf("0 1 ");
	for(i=2; i<n; i++)
	{sum=a+b;
		printf("%d ",sum);
		a=b;
		b=sum;
		
	}
	
}

