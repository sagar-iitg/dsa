#include <iostream>
#include<queue>
using namespace std;





void ropes(int arr[],int n){
    
    priority_queue<int,vector<int>,greater<int>>  minh; //min heap

    long long cost=0;
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
    cout<<cost<<endl;
    
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    ropes(arr,n);
	   
	}
	return 0;
}