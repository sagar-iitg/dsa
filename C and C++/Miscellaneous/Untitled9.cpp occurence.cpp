#include<stdio.h>
int main()
{
	int n,d,c=0;
	printf("enter no. whose occurence u want\n");
	scanf("%d",&n);
	printf("enter -1 to stop");
	printf("\n enter set\n");
	while(d!=-1)
	{
	
		if(d==n)
		c++;
		scanf("%d",&d);
	}
	printf("occurence of no. %d is:\n %d",n,c);
	return 0;
	
}
