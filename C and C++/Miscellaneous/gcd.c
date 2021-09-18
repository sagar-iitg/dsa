#include<stdio.h>
int gcd(int,int);
int main()
{
	int num1,num2,res;
	printf("enter the no.\n");
	scanf("%d %d",&num1,&num2);
	res=gcd(num1,num2);
	printf("\n gcd of two no. is %d and %d=%d",num1, num2,res);
	return 0;
}
int gcd(int x, int y)
{

int rem;
rem= x%y;
if(rem==0)
return y;
else

return (gcd(y,rem));
}
	

