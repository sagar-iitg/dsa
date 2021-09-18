#include<stdio.h>
int main()
{
	FILE *fp,*ft;char ch='y';
	fp=fopen("info.txt","w");
	if(fp==NULL)
	{
		printf("can't open file");
		return 1;
	}
	struct student
	{
		int roll;
		float p,m,c,tot;
		char name[20];
	};
	struct student s;
	while(ch=='y')
	{
		printf("Enter name,roll & marks in physics,maths,chemistry\n");
		scanf(" %s %d %f %f %f", s.name ,&s.roll,&s.p,&s.m,&s.c);
		fprintf(fp,"%s %d %f %f %f",s.name,s.roll,s.p,s.m,s.c);
		printf("Want more(enter y/n):");
		fflush(stdin);
		scanf("%c",&ch);
	}
	fclose(fp);
	fp=fopen("info.txt","r");
	
	ft=fopen("result.txt","w");
	if(ft==NULL)
	{
		printf("can't open file");
		return 1;
	}
	while(fscanf(fp,"%s %d %f %f %f",s.name,&s.roll,&s.p,&s.m,&s.c)!=EOF)
	{	
		s.tot=s.p+s.m+s.c;
		fprintf(ft,"%s %d %f %f %f %f",s.name,s.roll,s.p,s.m,s.c,s.tot);
		
	}
	fclose(fp);
	fclose(ft);
	return 0;
	
	
}
