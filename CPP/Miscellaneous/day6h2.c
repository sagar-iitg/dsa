#include<stdio.h>
void finddifference(int [],int);
int main()
{	int arr[50],i,n;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nA: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	finddifference(arr,n);
	return 0;
}
void finddifference(int arr[50],int size)
{	int i,j;
	for(j=1;j<=3;j++)
	{
		printf("D%d: ",j);
		for(i=0;i<size-j;i++)
		{
			arr[i]=arr[i+1]-arr[i];
			printf("%d",arr[i]);
			printf(" ");
    	}
    	printf("\n");
    }   
		
}
