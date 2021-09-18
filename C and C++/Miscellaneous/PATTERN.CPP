#include<stdio.h>
#include<conio.h>
int main()
{	int i,j,n,d;
	printf("Enter the no.of lines to be printed\n");
	scanf("%d",&n);
	d=n;
	for(i=1;i<=n;i++)
	{	for(j=1;j<=d-1;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d ",i);
	printf("\n");
	d--;
	}
	getch();
	return 0;
}
