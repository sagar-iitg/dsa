#include<stdio.h>
int main()
{
	int i=0, len;
	char s[10];
	printf("enter string");
	gets(s);
	while(s[i]!='\0')
	{
		len=i+1;
		i++;
	}
	printf("length of the string is %d",len);
}
