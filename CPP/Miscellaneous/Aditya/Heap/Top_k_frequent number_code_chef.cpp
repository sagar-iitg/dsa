#include <iostream>
#include<unordered_map>
#include<queue>
using namespace std;

typedef pair<int,int> p;

void top_k_frequent(int arr[],int k,int n){
    
    
    unordered_map<int,int> mp;
    priority_queue<p,vector<p>,greater<p>> minh; //pair min heap
    
    
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        
    }
    //iterate in map ;
    
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        minh.push({i->second,i->first});
        if(minh.size()>k)
        {
            minh.pop();
        }
        
    }
    while(minh.size()>0)
    {
        cout<<minh.top().second<<" ";
        minh.pop();
    }
  
}


int main() {
	// your code goes here
	
	
	int arr[]={1,1,1,1,1,1,1,3,2,2,4,4,4,4,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	top_k_frequent(arr,k,n);
	
	return 0;

    
}
