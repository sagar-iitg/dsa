#include<stdio.h>
#include<iostream>
using namespace std;
int increment(int);
int increment(int a)
{
    cout<<&a<<endl;
    a=a+1;
    return a;
}

int main()
{
    int a,b;
    a=10;
    b=increment(a);
    cout<<&b<<endl;
    //std::cout<<a;
    printf("%d",b);
}

