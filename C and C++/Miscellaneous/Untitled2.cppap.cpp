#include<stdio.h>
int main()
{
	int a,d,n,series,i;
	printf("enter values of a");
	scanf("%d",&a);
	printf("enter vcalues of d\n");
	scanf("%d",&d);
	printf(" enter no. of terms\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
	series=a+i*d;
	printf( "%d ",series);
	}
	return 0;
	}
	
	
	

