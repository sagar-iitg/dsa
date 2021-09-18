#include <iostream>
#include<queue>
using namespace std;


void k_closest_no(int arr[],int n,int x,int k)
{
    
    priority_queue<pair<int,int>> maxh;
    
    for(int i=0;i<n;i++)
    {
        maxh.push({ abs(arr[i]-x),arr[i] });
        if(maxh.size()>k)
        {
            maxh.pop();
            
        }
        
    }
    while(maxh.size()>0)
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
    
    
}



int main() {
	// your code goes here
	
	
	int arr[]={5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
	int k=3; //k closest 
	int x=5;
	
	
	k_closest_no(arr,n,x,k);
	
	return 0;
}
