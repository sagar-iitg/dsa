#include<stdio.h>
void fibonacci(int);
int main()
{
	int x,a=0,b=1;
	printf("\n enter the no. of terms in the series");
	scanf("%d",&x);
	printf("%d  %d" ,a, b);
	fibonacci(x-2);
	return 0;
}
	  
		
    
	

void fibonacci (int  num)
{	
	static int k=0,m=1,sum=0;
		if(num>0)
		{sum=k+m;
		k=m;
		m=sum;
		printf(" %d ",sum);
		fibonacci(num-1);
		
		}
		
	}	

