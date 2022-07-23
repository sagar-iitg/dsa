#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("\n press any key: ");
	scanf("%c",&ch);
	if(isalpha(ch)>0)
		printf("\n The user is entered character ");
	if(isdigit(ch)>0)
		printf("\n The user has entered digit");
	if(ispunct(ch)>0)	
		printf("\n the user has entered a punctuation marks");
	if(isspace(ch)>0)
		printf("\n the user has entered white space character");
		
	return 0;
}
