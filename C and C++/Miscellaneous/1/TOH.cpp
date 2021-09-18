#include<iostream>
using namespace std;


void TOH(int n,int x,int y,int z)
{


    if(n>0)
    {
        TOH(n-1,x,z,y);
        cout<<x<<y;
        TOH(n-1,z,y,x);


    }
}

int main()
{
    int n,x,y,z;
    cin>>n;
    x=n;
    TOH(n,x,y,z);
}
