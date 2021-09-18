#include<stdio.h>
#include<stdlib.h>
int main()
{	FILE *fp;
	char another='y',ch;
	struct emp
	{	
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	
	fp=fopen("EMPLOYEE.txt","a");
	
	if(fp==NULL)
	{	
		puts("cannot open file");
		return 1;
	}
	while(another=='y')
	{	
		printf("\nEnter name,age and basic salary");
		scanf("%s %d %f",e.name,&e.age,&e.bs);
		fprintf(fp,"%s %d %.2f\n",e.name,e.age,e.bs);
		
		printf("\nAdd another record(y/n)");
		scanf("%c",&another);
	}
	
	fclose(fp);
	return 0;
}
