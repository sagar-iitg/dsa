#include<stdio.h>
#include<math.h>
#define f(x,y) ((x*x)+(y*y))
int main()
{
	float x0=1,y0=1.2,xn=1.5,k1,k2,k3,k4,h=0.1,k,x,y;
	do
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2,y0+k1/2);
		k3=h*f(x0+h/2,y0+k2/2);
		k4=h*f(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		y=y0+k;
		x=x0+h;
		x0=x;
		y0=y;
		printf("\n y(%f)=%f",x,y);
		
	}while(fabs(x-xn)>0.01);
	
}
