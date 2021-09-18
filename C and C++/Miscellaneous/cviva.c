#include<stdio.h>
void prime(int);
void palindrome(int);
int main()
{	
	int num,ch;
	char rep='y';
	printf("menu:\n1.prime\n2.palindrome\n\n");
	while(rep=='y')
	{

		printf("Enter your choice(1-2):");
		scanf("%d",&ch);
		switch(ch)
		{
				case 1:printf("Enter the number:");
				  	   scanf("%d",&num);
				       prime(num);
				  	   break;
				case 2:printf("Enter the number:");
					   scanf("%d",&num);
				   	   palindrome(num);
				       break;
				default:printf("Entered wrong choice:\n");
					//here situation is same with or without break
			
		}
		printf("\n\nWant to check more(y/n):");
		fflush(stdin);//to clear input buffer
		scanf("%c",&rep);//without flushing scanf is taking "space" ascii 10 in it by input buffer
		printf("\n\n");
	}
	return 0;
}
void prime(num)
{
		int c=0,i;
		if(num==1)
			printf("1 is neither prime nor composite\n");
		else
		{
			for(i=2;i<num/2;i++)
			{	if(num%i==0)
					c++;
			}
			if(c==0)
				printf("The number is prime\n");
			else
				printf("Not prime\n");
	    }
}
void palindrome(num)
{	
	int tmp=num,d=0,rev=0;
	while(tmp>0)
	{	
		d=tmp%10;
		rev=d+rev*10;
		tmp/=10;
	}
	if(num==rev)
		printf("The number is a palindrome\n");
	else
		printf("Not a palindrome\n");
}
