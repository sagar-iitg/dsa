#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void ka(int arr[],int n)
{
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
    cout<<endl;
}
int main()
{


    int T;
    cin>>T;
    while(T--)
    {

        int N;
        cin>>N;
        int arr[N];

        for(int i=0;i<N;i++)
            cin>>arr[i];

        ka(arr,N);

    }

	return 0;
}
