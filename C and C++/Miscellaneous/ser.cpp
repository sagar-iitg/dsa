#include<stdio.h>
int power(int);
int fact(int);
int main()
{	int n,i;
	float sum=0.0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=(float)power(i)/fact(i);
	printf("sum of the given series is %.2f",sum);
}
int power(int i)
{	int j,p=1;
	for(j=1;j<=i;j++)
		p*=i;
	return p;
}
int fact(int i)
{	int j,f=1;
	for(j=1;j<=i;j++)
		f*=j;
	return f;
}
