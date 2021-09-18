#include<stdio.h>
int main()
{
	int a=0,b=1,sum,i,num;
	printf("enter num=");
	scanf("%d",&num);
	printf("\n 0 1");
	for(i=2; i<num; i++)
	{

		sum=a+b;
		a=b;
		b=sum;
		printf(" %d",sum);
		
	}
	return 0;
}
