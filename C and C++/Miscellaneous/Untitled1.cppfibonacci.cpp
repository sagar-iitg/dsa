#include<stdio.h>
int fibonnaci(int);
int main()
{
	int n,i;
	printf("enter the no. of terms in series:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	printf(" %d",fibonnaci(i));
	return 0;
}
int fibonnaci(int num)
{
	
	if(num==0)
	return 0;
	if(num==1)
	return 1;
	return (fibonnaci(num-1)+fibonnaci(num-2));
}
