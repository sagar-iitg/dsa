#include<stdio.h>
int main()
{
	int year;
	printf("enter year=");
	scanf("%d",&year);
	if(((year%100==0)&&(year%400==0))||(year%4==0)&&(year%100!=0))
	printf("leap yaar");
	else
	printf("not leap year");
	return 0;
}
