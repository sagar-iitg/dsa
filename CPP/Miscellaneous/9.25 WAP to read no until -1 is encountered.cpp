#include<stdio.h>
int main()
{
	int num,positive=0,negative=0,zeros=0;
	printf("\n enter -1 to exit");
	printf("\n enter number");
	scanf("\n %d",&num);
	while(num!=-1)
	{
		if(num>0)
		positive++;
		else if(num<0)
		negative++;
		else
		zeros++;
		printf("\n enter number");
		scanf("\n %d",&num);	
	}
	
}
