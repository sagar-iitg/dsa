#include<stdio.h>
int combi(int,int);
int main()
{	int i,j,n,d;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	d=n;
	for(i=0;i<=n-1;i++)
	{	for(j=0;j<=d-1;j++)
			printf(" ");
		for(j=0;j<=i;j++)
		{	printf("%d",combi(i,j));
			printf(" ");
		}
		printf("\n");
		d--;
	}
	return 0;
}int combi(int i,int j)
{	int f1=1,f2=1,f3=1,c;
	for(c=1;c<=i;c++)
	{	f1*=c;
		if(c<=j)
			f2*=c;
		if(c<=i-j)
			f3*=c;
	}
	return (f1/(f2*f3));
}
