#include<stdio.h>


void main(){
    char c[]="12345\0";
    char b[]={'1','2','3','\0'};
    //printf("%d", sizeof(b)/sizeof(b[0]));

    int x=strlen(c);


    printf("%d",x);







}
