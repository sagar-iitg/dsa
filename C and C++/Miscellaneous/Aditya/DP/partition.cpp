#include <iostream>
#include<cstring>
using namespace std;



bool subset_sum(int arr[],int n,int sum){
    
    int t[n+1][sum+1]; //dp array
    
    memset(t, -1, sizeof(t));
    
    
    
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
    
    return t[n][sum];

   
}

bool partition_sum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    
    if(s%2!=0)
        return false;
    
    else if(s%2==0)
    {
        return subset_sum(arr,n,s/2);
    }
    
    
}


int main() {
    
    int arr[]={5,7,3,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    //int sum=9;
    if(partition_sum(arr,n)==1)
        cout<<"YES";
    else
        cout<<"NO";

	return 0;
}
