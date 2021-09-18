#include<stdio.h>
int main()
{
	void add(void);
	add();
	return 0;
}
void add()
{
	int a,b,sum;
	printf("\n enter two values");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	
}
