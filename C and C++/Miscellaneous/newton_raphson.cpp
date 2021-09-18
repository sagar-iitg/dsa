#include<stdio.h>
#include<math.h>
#define f(x) (x)*sin(x)+cos(x)
#define g(x) (x)*(cos(x))
int main()
{
	float a=0,b=1,oldc,newc,count=0;
	while(f(a)*f(b)>0)
	{
		a++;
		b++;
	}

	do
	{
		oldc=a-f(a)/g(a);
		a=oldc;
		newc=a-f(a)/g(a);
		count++;
		
	}
	while(fabs(oldc-newc)>0.00001);
	printf("%f",newc);
	return 0;
}
