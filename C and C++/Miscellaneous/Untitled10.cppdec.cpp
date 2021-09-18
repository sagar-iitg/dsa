#include<stdio.h>
#include<math.h>
int main()
{
	int dec,bin,n,rem,a=0,i;
	printf("enter dec=");
	scanf("%d",&dec);
	n=dec;
	while(n>0)
	{
	
		rem=n%2;
		a=a+rem*pow(10,i);
		n=n/2;
		i++;
	}
	printf("binary equivalent of %d is %d",dec,a);
}

