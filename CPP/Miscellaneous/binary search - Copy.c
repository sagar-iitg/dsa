#include<stdio.h>
#include<stdlib.h>
int *arr;
int n;
int value;
void search(int*,int);
int main()
{

    int i,j,temp=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(arr[i]>arr[j])  
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	printf("\nThe array in sorted order is :\n");
	for(i=0;i<n;i++)
		printf("%3d",arr[i]);
    printf("\nEnter the value to be searched:\n");
    scanf("%d",&value);
    search(arr,value);
return 0;
}
void search(int *arr,int value)
{
     int beg,end,mid,c=-1;
     beg=0;
     end=n-1;
    while(beg<=end)
    {
         mid=(beg+end)/2;
         if(value==arr[mid])
         {
             c=mid;
             break;
         }
         else if(value<arr[mid])
         {
             end=mid-1;
         }
         else
             beg=mid+1;
    }
    if(c==-1)
         printf("\nThe value is not found");
	else
         printf("\nThe number %d is found in position %d",arr[mid],c+1); 
}
