#include<stdio.h>
#include<math.h>
#define f(x) ((x)*sin(x)+cos(x))
#define g(x)  ((x)*cos(x))
int main()
{
	
	float oc,a,b,nc,tol=0.00001;
	a=0,b=1;
	
	while(f(a)*f(b)>0)
	{
		a++;
		b++;
	}
	do
	{
		oc=a-(f(a)/g(a));
		
		a=oc;
		nc=a-(f(a)/g(a));
	
		
		
	}
	while(fabs(oc-nc)>tol);
	printf("%f",nc);
	
	return 0;
}
