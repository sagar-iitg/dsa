#include<stdio.h>
int main()
{
	int i=0,j=0;
	char s1[10],s2[10];
	printf("enter string");
	gets(s1);
	while(s1[i]!='\0')
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		s2[j]=s1[i]+32;
		else
		s2[j]=s1[i];
		i++;
		j++;
		
	}
	s2[j]='\0';
	printf("convert");
	puts(s2);
}
