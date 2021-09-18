#include<stdio.h>
int main()
{
	int n,c,d,rev=0;
	printf("enter no.");
	scanf("%d",&n);
	c=n;
	while(c>0)
	{
		d=c%10;
		rev=rev*10+d;
		c=c/10;
	
		switch(rev>0)
		{
			case 0:printf("zero");
			break;
			case 1:printf("one");
			break;
			case 2:printf("two");
			break;
			case 3:printf("three");
			break;
			case 4:printf("four");
			break;
			case 5:printf("five");
			break;
			case 6:printf("six");
			break;
			case 7:printf("seven");
			break;
			case 8:printf("eight");
			break;
			case 9:printf("nine");
			break;
			default:break;
			
		}
	}
}

