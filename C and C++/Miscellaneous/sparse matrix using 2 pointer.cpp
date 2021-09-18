#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **arr,i,j,k=1,r,c,count=0,s[10][10];
	arr=(int**)malloc(r*sizeof(int*));
	for(i=0; i<r; i++)
	arr[i]=(int*)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
	{
		for(j=0; j<c; j++)
		scanf("%d",&arr[i][j]);
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(arr[i][j]!=0)
			{
				count++;
			}
		}
	}

		s[0][1]=r;
		s[0][1]=c;
		s[0][2]=count;
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				if(arr[i][j]!=0)
				{
					s[k][0]=i+1;
					s[k][1]=j+1;
					s[k][2]=arr[i][j];
					k++;
		}	}	}
	

	 printf("\n sparse matrix is");
		for(i=0; i<r; i++)
		{
			for(j=0; j<c;j++)
				printf("%d",s[i][j]);
			printf("\n");
		}
		return 0;
}
