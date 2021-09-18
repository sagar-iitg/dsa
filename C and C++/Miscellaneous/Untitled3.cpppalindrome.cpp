#include<stdio.h>
int main()
{
	int n,num,rev=0,d;
	printf("enter num=");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{	d=num%10;
		rev=rev*10+d;
		num=num/10;
		
	}
		if(n==rev)
		printf("paliindrome");
		
		else
		printf("not palindrome");
		return 0;
}
