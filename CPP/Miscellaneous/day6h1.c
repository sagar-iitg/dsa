#include<stdio.h>
float power(float,int);
int main()
{	float x,ans;int n;
	printf("\nEnter the values of x and n\n");
	scanf("%f %d",&x,&n);
	ans=power(x,n);
	printf("\nThe required answer is %.7f",ans);
	return 0;
}
float power(float a,int b)
{	int i;float ans=1.0;
	for(i=1;i<=b;i++)
		ans=ans*a;
	return ans;
	
		
}
