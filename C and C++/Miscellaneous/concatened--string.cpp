#include<stdio.h>
int main()
{
	char s1[10],s2[10],s3[20];
	int i=0, j=0;
	printf("enter string");
	gets(s1);
	printf("enter 2 string");
	gets(s2);
	while(s1[i]!='\0')
	{
	
	
		s3[j]=s1[i];
		i++;
		j++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		s3[j]=s2[i];
		i++;
		j++;
	}
	s3[j]='\0';
	printf("concatened");
	puts(s3);
}
