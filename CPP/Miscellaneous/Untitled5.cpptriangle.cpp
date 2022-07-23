#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>0)&&(b>0)&&(c>0))
	{
		if(((a+b)>c)&&((b+c)>a)&&((c+a)>b) )
		{
			if((a==b)||(a==c)||(b==c))
			printf("triangle is isoceles");
   			else if((a==b)&&(b==c))
   			printf("equilateral");
   			else if((a*a+b*b==c*c)||(c*c+b*b==a*a)||(c*c+a*a==b*b))
   			printf("right angle");
   		
   			else if
   			printf("triangle is scalene");
   			else("triangle can't formed");
   			
   	}
   	else("enter positive no.");
	}
	
	
}
