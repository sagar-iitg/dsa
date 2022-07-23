#include<stdio.h>
#include<math.h>
#define f(x) ((x)*sin(x)+cos(x))
int main()
{
	float a,b,oc,nc;
	a=0;
	b=1;
	while(f(a)*f(b)>0)
	{
		a++;
		b++;
	}
	do
	{
	
		oc=(a*f(b)-b*f(a))/(f(b)-f(a));
		if(f(a)*f(oc)<0)
		b=oc;
		else
		a=oc;
		nc=(a*f(b)-b*f(a))/(f(b)-f(a));
	}while(fabs(oc-nc)>0.0000001);
	printf("%f",nc);
}
