#include<iostream>
using namespace std;
int main()
{

     int arr[]= {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};

     int  n=sizeof(arr)/sizeof(arr[0]);

     int sum,c=0;
     cin>>sum;

     for(int i=0;i<n;i++)
     {
          for(int j=i+1;j<n;j++)
             {
            if(arr[i]+arr[j]==sum)
                 c++;

            }


     }





    cout<<c;


}
