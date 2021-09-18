#include<stdio.h>
#include<stdlib.h>
int *a,n;
int insertion(int*,int);
int main()
{
	int i;
	
	printf("\n enter the size\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\n enter no.of elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion(a,n);
	printf("\n sorted array\n");
	for(i=0;i<n;i++)
	printf("\n %d",a[i]);
}
int insertion(int *a,int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
	
	
		
	

