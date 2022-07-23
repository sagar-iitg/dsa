#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int A[]={0,4,5,6,7};
    int *p;
    p=A;
    cout<<A<<" "<<p<<"\n";
    cout<<*A<<" "<<*p<<"\n";
    cout<<A+1<<" "<<p+1<<"\n";
    cout<<*(A+1)<<" "<<*(p+1)<<"\n";
    cout<<A+2<<" "<<p+2<<"\n";
    cout<<*(A+2)<<" "<<*(p+2)<<"\n";
    cout<<A+4<<" "<<p+4<<"\n";
    cout<<*(A+4)<<" "<<*(p+4)<<"\n";
    return 0;
}
