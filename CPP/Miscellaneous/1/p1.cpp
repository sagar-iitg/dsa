#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    //cout<<sizeof(int)<<"\n";
    printf("%d\n",a);
    printf("%d\n",p);
    //printf("%u\n",a);
    cout<<&a<<endl;
    cout<<p;
    /*cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p;*/
    return 0;

}
