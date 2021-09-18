#include<stdio.h>
int main()
{
	int  n,sum=0,rev=0,d,num,c=0;
	printf("enter n=");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		rev=rev*10+d;
		n=n/10;
		c++;
		
	}
	printf("the sum of digit is %d",sum);
	if(rev==num)
	printf("palindrome");
	else
	printf("not palindrome");
	printf("enterd through keyboard is %d",c);
}
