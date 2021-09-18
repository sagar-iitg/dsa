#include <iostream>
#include<queue> 

using namespace std;



void ropes(int arr[],int n){
    
    priority_queue<int,vector<int>,greater<int>>  minh; //min heap

    int cost=0;
    for(int i=0;i<n;i++){
        
        minh.push(arr[i]);
    }
    while(minh.size()>=2){
    
        int first=minh.top();
            minh.pop();
        int second=minh.top();
            minh.pop();
        cost=cost+first+second;
        minh.push(first+second);
        
        
    }
    cout<<cost;
    
    
}
int main() {
	// your code goes here
	int arr[]={4,3,2,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	ropes(arr,n);
	return 0;
}
