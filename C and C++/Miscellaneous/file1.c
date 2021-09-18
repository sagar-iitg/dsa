#include<stdio.h>
int main()
{	FILE *fp;
	char ch;
	int c=0;
	fp=fopen("myy.txt","r");
	while(1)
	{	ch=fgetc(fp);
		if(ch=='\n')
			c++;
		if(ch==EOF)
			break;	
	   
		printf("%c",ch);
	}
	printf("\nno.of lines are:%d",c);
	
	fclose(fp);
	return 0;
}
