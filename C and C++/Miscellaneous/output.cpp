#include<stdio.h>
int main()
{
	int x=3,y=5,z=7;
	int a,b;
	a=x*2+y/5-z*y;
	b= ++x * (y-3) / 2-z++ * y;
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	return 0;
}
