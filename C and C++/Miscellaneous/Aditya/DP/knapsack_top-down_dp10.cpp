#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;


int knapsack(int wt[],int v[],int w,int n)
{
    
    int t[n+1][w+1];      // matrix
   
   //initialization 
   
  for(int i=0;i<n+1;i++)
  {
      for(int j=0;j<w+1;j++)
      {
          if(i==0 || j==0)
               t[i][j]=0;
      }
  }
    
    
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(wt[i-1]<=j)
            {
                 t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]] , t[i-1][j]); 
                
            }
    
            else if(wt[i-1]>j)
            {
                 t[i][j]= t[i-1][j];
            } 
        }
    }
   
   return t[n][w]; 
    
}

int main() {
	//code
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n,w;// n-> number of items
	    cin>>n;
	    cin>>w; //W->capacity
	    
	    int wt[n];//wt<- weight matrix
	    int v[n];  // value matrix
	    
	    for(int i=0;i<n;i++)
	        cin>>v[i];
	   
	    for(int i=0;i<n;i++)
	        cin>>wt[i];
	    int ans=knapsack(wt,v,w,n);
	    cout<<ans<<endl;
	        
	    
	    
	}
	return 0;
}