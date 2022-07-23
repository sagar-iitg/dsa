#include<stdio.h>
void fibonacci(int n1,int n2,int num)
{
	if(num!=0)
	{
		printf("%d",n1);
		scanf("%d",&n1);
		fibonacci(n2,n2+n1,num-1);
		
	}
	
}
	int main()
	{
		int n;
		printf("\n enter the no. of terms in the series:\n");
		fibonacci(0,1,n);
		return 0;
	}
