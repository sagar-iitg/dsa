#include<iostream>
#include<cstdio>
using namespace std;
void f(int *p,int *q)
{

    p=q;
    *p=2;
}
int i=0,j=1;
int main()
{

    f(&i,&j);
    printf("%d %d",i,j);
    return 0;
}
