#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch,name[500];
	FILE *fp;
	printf("enter the name of file ");
	gets(name);
	fp=fopen(name,"r");
	if(fp==NULL)
	{
		printf("not exist");
		return 1;
		
	}
	printf("the contents of file %s:\n",name);
	while(ch=fgetc(fp)!=EOF)
	printf("%c",ch);
	fclose(fp);
	return 0;
}
