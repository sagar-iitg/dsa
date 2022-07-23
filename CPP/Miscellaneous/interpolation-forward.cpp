#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=5,j;
	int f[10][10]={0};
	printf("\n enter the value of x\n");
	for(i=0; i<n;i++)
		scanf("%d",&f[i][0]);
	printf("\n enter the value of y\n");
	for(i=0; i<n;i++)
		scanf("%d",&f[i][1]);
	
	
		
		for(i=2;i<=n;i++)
		{
				for(j=0;j<=n-i;j++)
				f[j][i]=f[j+1][i-1]-f[j][i-1];
			
			}
		printf("\n\n\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<=n-i;j++)
					printf("%d\t",f[i][j]);
			printf("\n\n");
		}
		
			
			
		
	return 0;
	
}
