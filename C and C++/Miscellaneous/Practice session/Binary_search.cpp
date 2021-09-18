#include<bits/stdc++.h>
using namespace std;

void binary_search(int arr[],int n,int num)
{

    int start=0;
    int end=n-1;


    while(start <= end)
    {
         int mid=start+(end-start)/2;
        if(arr[mid]==num)
        {

            cout<<mid;
            break;
        }
        else if(arr[mid] > num)
        {

            mid=end-1;
        }
        else
            start=mid+1;

    }


}
int main()
{



    int arr[]={1,2,3,4,5,6,7,8,99};


    int n=sizeof(arr)/sizeof(arr[0]);
    binary_search(arr,n,99);
    return (0);



}
