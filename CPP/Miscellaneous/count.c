#include<stdio.h>
int main()
{int i=0,count=0;
 char str[100];
 printf("Enter the string");
 gets(str);
 while(str[i]!='\0')
 {count++;i++;
 }
  printf("%d %d",count,i);
  return 0;
}
