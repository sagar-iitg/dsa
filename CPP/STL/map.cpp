#include <iostream>
#include<unordered_map>
#include<map>
using namespace std;


void top_k_frequent(int arr[],int k,int n){
    
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        
    }
    
    cout<<"ele/keys"<<" "<<"freq/value"<<endl;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" ";
      
        cout<<itr->second<<" ";
          cout<<endl;
    }
}
int main() {
	// your code goes here
	
	
	int arr[]={1,1,1,3,3,3,0,2,2,4,10,2,2};
	int k=2;
	top_k_frequent(arr,k,12);
	
	return 0;
}
