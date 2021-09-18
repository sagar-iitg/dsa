#include<stdio.h>
#include<math.h>
#define f(x,y)  ((y*y)-(x*x))
int main()
{
	float x0,xn,h,y0,y,x;
	x0=1;
	y0=1;
	h=0.1;
	xn=2;
	
	do
	{
		y=y0+h*f(x0,y0);
		x=x0+h;
		y0=y;
		x0=x;
		printf("\n y(%f)=%f",x,y);
	}while(fabs(x-xn)>0.01);
	printf("\n %f",y);
	
 } 
