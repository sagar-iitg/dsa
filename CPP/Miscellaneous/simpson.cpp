#include<stdio.h>
#include<math.h>
#define f(x) ((x)*exp(x))
int main()
{
	int i,n=6;
	float a,b,h,sum=0,prod=1,ans;
	a=-1;b=0;
	h=(b-a)/n;
	sum=f(a)+f(b);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			sum+=2*f(a+i*h);
			
		}
		else
		sum+=4*f(a+i*h);
	}
	ans=(h/3)*sum;
	printf("\n %f",ans);
	
	
}

