#include<stdio.h>
int main()
{	int n,rev,e,j,c=0,sum=0,num;
	printf("Enter the number\n");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{	e=n%10;
		sum+=e;
		rev=e+rev*10;
		n/=10;
		c++;
	}
	if(rev==num)
		printf("\n Its a palindrome");
	else
		printf("\nNot a palindrome");
	printf("\nThe sum of the no is %d & count is %d",sum,c);
	return 0;
}
