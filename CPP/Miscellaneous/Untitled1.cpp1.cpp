#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter the values of a and b\n");
	scanf("%d %d",&a,&b);
	printf("before swapping value of a and b are: \n %d %d\n",a,b);
	
	t=a;
	a=b;
	b=t;
	printf("after swapped value of a and b is %d %d",a,b);
	return 0;
	
}
