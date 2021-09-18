#include<iostream>
using namespace std;
int main()
{

    int i,j,a[10],t,n=5;
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {

        if(a[0]>a[i])
            {
                t=a[i];
                a[i]=a[0];
                a[0]=t;

            }
    }
    for(i=0;i<n;i++)
        cout<<a[i];
}
