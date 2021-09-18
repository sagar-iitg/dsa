#include <iostream>
#include<cstring>
#include<algorithm>

using namespace std;

    

int knapsack(int wt[],int v[],int w,int n)
{
    
    int t[n+1][w+1];      // matrix

    memset(t,-1,sizeof(t));
   
    if(n==0 || w==0)
        return 0;
    
    if(t[n][w]!=-1)
        return t[n][w];
    
    
    if(wt[n-1]<=w)
    {
        return t[n][w]=max(v[n-1]+knapsack(wt,v,w-wt[n-1],n-1),
        knapsack(wt,v,w,n-1));
        
    }
    
    else if(wt[n-1]>w)
    {
        return t[n][w]= knapsack(wt,v,w,n-1);
    }
    
    
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