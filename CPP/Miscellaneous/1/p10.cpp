#include<iostream>
#include<cstdio>
using namespace std;
int sumofarray(int A[],int siz)
{
    int total=0,i;
    for(i=0;i<siz;i++)
        total+=A[i];
    //cout<<total<<endl;
    return total;
}
int main()
{
    int x,siz;
    //cout<<sizeof(int);

    int A[]={2,2,3,6,5};
    siz=sizeof(A)/sizeof(A[0]);
    x=sumofarray(A,siz);
    cout<<x;
}
