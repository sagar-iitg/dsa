#include<stdio.h>
int main()
{	int i;
	for(i=1;i<10000;i++)
	{if(i%2==1 && i%3==1 && i%4==1 && i%5==1 && i%6==1 && i%7==0)
	 	printf("%d ",i);
	}
	return 0;
}
