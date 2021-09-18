#include<stdio.h>
#include<math.h>
#define f(x,y) (1/log((x)+(y)))
int main()
{
	float x0=1,y0=2,yp,xn=1.5,h=0.05,y,x;
	
	
		while(fabs(x0-xn)>0.001)
		{
			y=y0+h*f(x0,y0);
			do
			{
				yp=y;
				y=y0+(h/2)*(f(x0,y0)+f((x0+h),yp));
				
				
			}while(fabs(y-yp)>0.001);
			x=x0+h;
			x0=x;
			y0=y;
			printf("\n y(%f )=%f",x,y);
		}
	
	
}
