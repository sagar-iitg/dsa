#include<stdio.h>
int main()
{	int i,c=0;
	for(i=0;i<10;i++)
	{if(i=5)//if i==5 see what happens and assert why??
		break;
	c++;	
		
	}
	printf("%d %d",i,c);
	return 0;
}
