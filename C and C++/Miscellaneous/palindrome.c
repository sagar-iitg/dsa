#include<stdio.h>
int main()
{
	int num,n,rev,d;
	printf("\n enter the num=");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{	d=num%10;
		rev=rev*10+d;
		num=num/10;
	}
	if(rev==n)
	printf("palindrome ");
	else
	printf("not palindrome");
	return 0;
}
