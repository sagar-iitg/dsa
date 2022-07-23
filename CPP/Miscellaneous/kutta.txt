#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])

{
	int *a,n,i,j,t;
	n=atoi(argv[1]);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the %d no. ",n);
	for(i=0; i<n; i++)
	scanf("%d",(a+i));
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			if(*(a+i)>*(a+j))
			{
				t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}
		}
	}
	printf("after\n");
	for(i=0; i<n; i++)
	printf("\n %d",*(a+i));
	return 0;
}
