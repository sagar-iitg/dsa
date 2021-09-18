#include<stdio.h>
int main()
{

    int a=1025;
    int* p;
    p=&a;
    printf("%d %d\n",p,*p);
    //void pointer generic pointer
    void *p0;
    p0=p;
    printf("%d",p0);
    return 0;
}
