#include<stdio.h>
#include<math.h>
#define f(x) (x*sin(x)+cos(x))
int main()
{
	float a=0,b=1,oldc,newc,s;
	do
	{
		s=f(b)-f(a);
		oldc=b-(f(b)/s)*(b-a);
		if(f(a)*f(oldc)<0)
		b=oldc;
		else
		a=oldc;
		
		newc=b-(f(b)/s)*(b-a);
	}
	while(fabs(oldc-newc)>0.00001);
	printf("%f",newc);
	return 0;
	
	
	
}
