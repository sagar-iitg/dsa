#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,temp,n,p=0,m;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("\n enter elements in the array\n");
	for(i=0; i<n; i++)
	{	scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
		
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\n array in ascending order");
	for(i=0; i<n; i++)
	printf("%d",a[i]);
	printf("\n array in desending order\n");
	for(i=n-1; i>=0; i--)
	printf("%d",a[i]);
	printf("enter the element u wnt to find in array:\n");
	scanf("%d",&m);
	for(i=0; i<n; i++)
	{
		if(b[i]==m)
		{
		p++;
		break;}
	}
	if(p==1)
	printf("element %d found at position %d",m,i);
	else
	printf("not founnd");
	
}
