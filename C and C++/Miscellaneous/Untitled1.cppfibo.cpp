#include<stdio.h>
int fibo(int);
int main()
{
	int n,i;
	printf("\n enter no. of series");;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	printf( " %d",fibo(i));
	return 0;
}
int fibo(int num)
{
	if(num==0)
	return 0;
	if(num==1)
	return 1;
	return(fibo(num-1)+fibo(num-2));
}

