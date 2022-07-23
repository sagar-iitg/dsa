#include<stdio.h>

int main(){

    int i=0;
    while(i++){
        printf("%d",i);

        printf("Loop");
        if(i==3){
            break;
        }
    }
    int x=5%9;
    printf("%d",x);
    return 0;

}
