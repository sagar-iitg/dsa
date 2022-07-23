#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int a[t],b[t];
    for(int i=0;i<t;i++)
        cin>>a[i]>>b[i];

    int multiply=1;
    int out[t];
    int moves=0;

    for(int i=0;i<t;i++)
    {

        while(a[i]%b[i]!=0)
        {
            a[i]=a[i]+1;
            moves++;
        }
        out[i]=moves;



    }
    for(int i=0;i<t;i++)
        cout<<out[i]<<endl;



}
