#include<iostream>
using namespace std;



class A{

public:
    static int c;
    int a,*b;
    A(){

        b=(int *)malloc(sizeof(int));
        a=++c;
        *b=2*a;


    }
};

int A::c=0;


int main(){

    A *i=new A[1];
    A j=*i;
    *(j.b)=6;
    cout<<i->a;
    cout<<*(i->b);
    cout<<j.a;
    cout<<*(i->b);
    return 0;




}
