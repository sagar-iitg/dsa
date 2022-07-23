#include<stdio.h>
int main()
{
	int a[50],i,n,c=0,d;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n; i++)
	scanf("%d",&a[i]);
	printf("enter no. whose frequency u want in array\n");
	scanf("%d",&d);
	for(i=0; i<n; i++)
	{
		if(a[i]==d)
		c++;
	}
	printf("frequency %d",c);
}
