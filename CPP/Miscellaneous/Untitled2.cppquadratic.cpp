#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x1,x2;
	printf("enter the value of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>=0)
	{
		printf("\n root is real");
		printf("roots are:\n");
	
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("%d %d",x1,x2);
	}
	else
	printf("imaginary");
}
	
