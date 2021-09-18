#include<stdio.h>
#include<iostream>>
using namespace std;
int main()
{

    int a=5;
    int *p;
    p=&a;
    *p=6;
    cout<<a<<endl;
    cout<<*p<<endl;
    int **q;
    q=&p;
    cout<<**q<<endl;
    int ***r;
    r=&q;
    cout<<***r<<endl;
    return 0;


}
