#include<stdio.h>
int main()
{
	int n,d,num,rev=0,sum=0,c=0;
	printf("entered no.");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
	
	d=n%10;
	sum+=d;
	rev=rev*10+d;
	n=n/10;
	c++;
}
printf("sum of digit is %d",sum);
printf("total no. of digit is %d",c);
if(rev==num)
printf("paindrome");
else
printf("not palindrome");
}
