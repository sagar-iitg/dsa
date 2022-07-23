#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[100],top,temp,i,j,*arr2;
	printf("\nEnter the value of top\n");
	scanf("%d",&top);
	printf("\nEnter the data of the queue\n");
	for(i=0;i<top;i++)
		scanf("%d",&arr1[i]);
	arr2=(int*)malloc(top*sizeof(int));
	for(i=0;i<top;i++)
		arr2[i]=arr1[(top-1)-i];
	for(i=0;i<top;i++)
	{	temp=arr2[top-1];
		for(j=top-1;j>i;j--)
			arr2[j]=arr2[j-1];
		arr2[i]=temp;
	}
	for(i=0;i<top;i++)
		printf("\t%d->",arr2[i]);
	return 0;
	
}
