#include<stdio.h>
int main()
{
	int p,q;
	void add(int,int);
	printf("\n enter two no\n");
	scanf("%d %d ",&p,&q);
	add(p,q);
	return 0;
}
void add(int x,int y)
{
	int sum;
	sum=x+y;
	printf("\n sum=%d",sum);
	
}
