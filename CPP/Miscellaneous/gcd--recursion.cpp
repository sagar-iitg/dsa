#include<stdio.h>
int gcd(int,int);
int main()
{
	int num1,num2,res;
	printf("enter two no.s");
	scanf("%d %d",&num1,&num2);
	res=gcd(num1,num2);
	printf("gcd of a no.%d %d is %d ",num1,num2,res);
	return 0;
}
int gcd(int x,int y)
{
	
	if(x%y==0)
	return y;
	return(gcd(y,x%y));
}
