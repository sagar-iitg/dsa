#include<stdio.h>
#include<string.h>
int main()
{
	int i=0, j=0,temp;
	char s1[10];
	printf("enter string");
	gets(s1);
	j=strlen(s1)-1;
	while(i<j)
	
	{
		temp=s1[j];
		s1[j]=s1[i];
		s1[i]=temp;
		i++;
		j--;
		
	}
	printf("\n reversed string is:");
	puts(s1);
	if(s1[i]==s1[j])
	printf("palindrome");
	else
	printf("not");
	
}
