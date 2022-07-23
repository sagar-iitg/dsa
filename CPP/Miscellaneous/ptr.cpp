#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int *a,i,j,n,temp;
	n=atoi(argv[1]);
	a=(int*)malloc(n*sizeof(int));
	printf("\n enter elements in array");
	for(i=0; i<n; i++)
	scanf("%d",(a+i));
	for(i=0;i<n;i++)
	{
		for(j=0; j<=i; j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
		
	}
	printf("\n sorted elements are:\n");
	for(i=0; i<n; i++)
	printf("%d",*(a+i));
	return 0;
	
	
	
	
}
