#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])

{
	FILE *fp1,*fp2;
	char s[70];
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	while(fgetc(fp1)!=EOF)
	{
		fgets(s,70,fp1);
		fputs(s,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("\n file copied sucessfully");
	
	
}

