#include<stdio.h>
#include<stdlib.h>
int *arr,value,n;
int search(int *,int);
int main()
{
	int i;
	printf("\n enetr the size of the array:\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("\n enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printf("\n enter the value u want to search\n");
		scanf("%d",&value);
		search(arr,value);
		return 0;
}
int search(int *arr,int value)
{
	int i,flag=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==value)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\n %d is found in %d position",value,(i+1));
	else
		printf("\n the value is not found ");
		
	
	
}
