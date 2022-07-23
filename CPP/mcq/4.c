#include<stdio.h>

int *A,v;


int fun(int s, int val){

    static int size=0,v=0;
    switch(s){
        case -1:
        size=val;
        break;
        case 0:
        if(v<size) A[v++]=val;
        break;
        default:
        if(v) return A[--v];
    }
    return -1;

}

int main(){


    int B[20];
    A=B;
    v=-1;
    fun(-1,10);
    fun(0,5);
    fun(0,10);
    printf("%d",fun(1,0)+fun(1,0));
}