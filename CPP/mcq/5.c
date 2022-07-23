#include<stdio.h>

int main(){


    struct city{
        char *name;
        struct city *ptr;
    };


    static struct city state[]={{"Los Angeles",state+1},{"Oakland",state+2},{"Roseville",state}};
    struct city *p[3];
    int i;

    for(i=0;i<=2;i++){
        p[i]=state[i].ptr;

    }

    printf("%s",(*p)->name);
    printf("%s",(++*p)->name);
    printf("%s",((*p)++)->name);
    return 0;

}