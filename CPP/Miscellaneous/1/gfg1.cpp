#include<bits/stdc++.h>
using namespace std;


/*int solve(int arr[],int n,int k)
{

    int start=1,end=0;
    for(int i=0;i<n;i++)
    {

        end=end+arr[i];

    }
    cout<<end;
}*/

int main()
{

    int arr[]={1,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]); //no of elements in the array
    //cout<<n<<endl;
    int k=3;
    //output=solve(arr,n,k)
    //cout<<output;


    int start=1,end=0;
    for(int i=0;i<n;i++)
    {

        end=end+arr[i];//end=sum of all elements

    }
    //cout<<end;
    int ans=0;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // If mid is possible solution
        // Put answer = mid;
        if (check(mid, array, n, K)) {
            answer = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }



}
