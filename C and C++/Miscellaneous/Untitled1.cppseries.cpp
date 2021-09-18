#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
	int n,i;
	float f,s=0.0;
	printf("\n enter no. of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=fact(i);
		s=s+(pow(i,i)/f);
	}
	printf("sum of series is %f",s);
	return 0;
}
int fact(int i)
{
		
			
	int c,factorial;
	factorial=1;
	for(c=1;c<=i;c++)
		factorial=factorial*c;
		
	return factorial;
	
}

