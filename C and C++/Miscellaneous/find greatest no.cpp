#include<stdio.h>
int main()
{
	int num,large=-1,i=0,g;
	printf("\n how many no you want enter ");
	scanf("%d",&g);
	while (i<g)
	{
		printf("\n enter numbers");
		scanf("%d",&num);
		large=num>large?num:large;
		i++;
		
		
	}
	printf("\n %d", large);
}
