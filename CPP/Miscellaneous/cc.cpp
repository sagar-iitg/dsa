#include<stdio.h>
int fibonacci(int);
int main()
{	int n,i;
	printf("Enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("%d\n",fibonacci(i));
	
	}
	return 0;
}
int fibonacci(int num)
{	if(num==0 || num==1)
		return 1;
	return(fibonacci(num-1)+fibonacci(num-2));
}
