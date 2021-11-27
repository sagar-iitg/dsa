#include<stdio.h>



int funny(int k,int *p){
    int t,f;
    if(k<=1){
        *p=1;
        return 1;

    }
    t=funny(k-1,p);
    f=t+*p;
    *p=t;
    return f;

}
int main(){

    int z=15;
    printf("%d",funny(5,&z));
    return 0;
}