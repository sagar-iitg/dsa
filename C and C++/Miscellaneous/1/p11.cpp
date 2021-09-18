#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char c[20]="JOHN";
   /* c[0]='j';
    c[1]='o';
    c[2]='h';
    c[3]='n';
    c[4]='\0';*/
    int len=strlen(c);
    cout<<"length of the string "<<" "<<len<<endl;
    printf("%s",c);
}
