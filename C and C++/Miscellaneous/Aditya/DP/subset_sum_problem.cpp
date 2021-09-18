#include <iostream>
#include<cstring>
using namespace std;



void subset_sum(int arr[],int n,int sum){

    int t[n+1][sum+1]; //dp array
    memset(t, -1, sizeof(t[0][0]) *(n+1) * (sum+1));



    /*for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
            cout<<t[i][j]<<" ";
         cout<<endl;
    }
    cout<<endl;
    cout<<"-------------------"<<endl;*/

    //initialization of dp array



    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
                t[i][j]=0;

            if(j==0)
                t[i][j]=1;
        }

    }

    /*for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
            cout<<t[i][j]<<" ";
         cout<<endl;
    }*/


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                 t[i][j]= t[i-1][j-arr[i-1]] || t[i-1][j];

            }

            else if(arr[i-1]>j)
            {
                 t[i][j]= t[i-1][j];
            }
        }
    }

    //output

    /*cout<<endl;
    cout<<"----------------"<<endl;


     for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
            cout<<t[i][j]<<" ";
         cout<<endl;
    }*/


     if(t[n][sum]==1)
        cout<<"True";
    else
        cout<<"false";



}


int main() {

    int arr[]={ 3, 34, 4, 12, 5, 2 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=30;
    subset_sum(arr,n,sum);
	// your code goes here
	return 0;
}
