#include<stdio.h>

void main(){

    int i;
    char a[5]={97,99,101,103,105};
    for(i=0;i<5;i=i+2){
        printf("%d\n",i);
        printf("%c %d",a[++i],i);
        printf("\n");

    }
    printf(", %d",i);


}
