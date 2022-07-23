#include<stdio.h>
int isSymmetric(int arr[10][10],int);
int main()
{	int i,j,n,arr[10][10],flag;
	printf("\nEnter the size of matrix\n");
	scanf("%d",&n);
	printf("\nTHE MATRIX IS:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}
	flag=isSymmetric(arr,n);	
	if(flag==1)
		printf("\nTHE MATRIX IS SYMMETRIC!!");
	else
		printf("THE MATRIX IS NON-SYMMETRIC!!");
	return 0;
}
int isSymmetric(int arr[10][10],int n)
{	int i,j,flag=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
			if(arr[i][j]!=arr[j][i])
				flag=0;
    }
				
	return flag;
}
