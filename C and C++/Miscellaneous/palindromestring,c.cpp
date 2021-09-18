#include<stdio.h>
#include<string.h>
int main()
{
	int left,right,len,flag=0;
	char s1[10];
	printf("enter string");
	gets(s1);
	len=strlen(s1);
	left=0;
	right=len-1;
	while(left<right)
	{
	
	if(s1[left]==s1[right])
	{
		left++;
		right--;
		
	}
	else
	{
		flag=1;
		break;
	}}
	if(flag==0)
	printf("palindrome");
	else
	printf("not");
	
}
