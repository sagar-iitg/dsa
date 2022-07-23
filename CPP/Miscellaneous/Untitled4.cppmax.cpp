#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter values of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	
	

	max=((a>b)?((a>c)?a:c):((b>c)?b:c));
	printf("max=%d",max);
   	return 0;
	
}
