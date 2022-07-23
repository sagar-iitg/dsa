#include<stdio.h>
int main()
{
	int i,j,a[10],n,max,mode,pos;
	printf("\n enter no. of elements");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		max=0;
	for(i=0;i<n;i++)
	{
		mode=1;
	
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			mode++;
			
		}
		if(mode>max)
		{
			max=mode;
			pos=i;
		}
	}
	printf("\n\n%d",a[pos]);
}
