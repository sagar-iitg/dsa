#include<stdio.h>
int main()
{
	int n,space,num,d,c;
	printf("enter no. of lines\n");
	scanf("%d",&n);
	space=n;
	for(d=1; d<=n; d++) //lines
	{
		num=d;
		for(c=1;c<=2*space-1; c++) //space
		printf(" ");
		space--;
	
		for(c=1; c<=d; c++) 
		{
			printf(" ");
			printf("%d",num);
			num++;
		}
		num-=2;
		
		for(c=1;c<d; c++)
		{
			printf(" ");
			printf("%d",num);
			num--;
		}
		printf("\n\n");
	}
	
}
 

	


