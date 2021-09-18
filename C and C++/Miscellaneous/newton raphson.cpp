#include<stdio.h>
#include<math.h>
#define f(x) ((x)*sin(x)+cos(x))
#define g(x)  ((x)*cos(x))
int main()
{
	int a=0,b=1,c=0;
	float oc,nc;
	while(f(a)*f(b)>0)
	{
		a++;
		b++;
	}
	do
	{
		oc=a-f(a)/g(a);
		a=oc;
		nc=a-f(a)/g(a);
		c++;
		
	}
	while(fabs(oc-nc)>0.00001);
	printf("%f",nc);
	
	
}
