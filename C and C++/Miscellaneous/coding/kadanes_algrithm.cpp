#include<iostream>
using namespace std;

int main()
{


    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);


    int meh=0;
    int msf=INT_MIN;


    for(int i=0;i<n;i++)
    {

        meh=meh+arr[i];
        if(meh<arr[i])
            meh=arr[i];
        if(msf<meh)
            msf=meh;
    }
    cout<<msf;
    return 0;



}
