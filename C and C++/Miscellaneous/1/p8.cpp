#include<cstdio>
#include<iostream>
using namespace std;
void increment(int *p)  // pointer to integer
{

    *p=*p+1;
}
// call by address (pass the address of the variable)
int main()
{

    int a;
    a=5;
    std::cout<<&a<<endl;
    increment(&a); //call by address
    printf("%d",a);
}
