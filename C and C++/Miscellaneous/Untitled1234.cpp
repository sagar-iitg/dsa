#include<stdio.h>
#include<math.h>
#define f(x) (x)*exp(x)
int main()
{
	int i;
	float y,ans,h,a=-1.0,b=0.0,n=6.0;
	h=(b-a)/n;
	printf("%f",h);
	y=f(a)+f(b);
	for(i=1;i<n;i++)
	
		y+=2*f(a+i*h);

	ans=(h/2)*y;
	printf("\n%f",ans);
	
	
}
