#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][3],m,n,s=0,i,j;
	
	printf("enter the order m*n of the sparse matrix\n ");
	scanf("%d %d",&m,&n);
	printf("enter the elements \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d",a[i][j]);
	    }
	    printf("\n");
		
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]!=0)
			{
				b[s][0]=a[i][j];
				b[s][1]=i;
				b[s][2]=j;
				s++;
		    }
		}
	}
	printf("the sparse matrix is given by");
	printf("\n");
	for(i=0; i<s; i++)
	{
		for(j=0; j<s; j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}

	

