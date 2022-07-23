#include<stdio.h>
float series(int,int);
int fact(int);
int expo(int,int);
int main()
{	int x,n;
	printf("Enter the value of x & n");
	scanf("%d %d",&x,&n);
	printf("%f",(series(x,n-1)));
	return 0;
}
float series(int x,int n)
{	
	if(n==0)
		return 1;
	return((float)expo(x,n)/(float)fact(n)+series(x,n-1));
}
int fact(int n)
{	if(n==0)
		return 1;
	return(n*fact(n-1));
}
int expo(int x, int  n)
{	if(n==0)
		return 1;
	return (x*expo(x,n-1));
}
