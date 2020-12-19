#include<stdio.h>
int main(){

    int var=10;
    printf("%d\n",sizeof(var));
    printf("%d\n",&var);
    printf("%d",&var+1);
    return 0;
}
