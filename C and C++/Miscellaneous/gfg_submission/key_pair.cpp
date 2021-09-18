#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void key_pair(int arr[], int arr_size, int sum) 
{ 
    unordered_set<int> s;
    
    for (int i = 0; i < arr_size; i++) { 
        int temp = sum - arr[i]; 
  
        if (s.find(temp) != s.end()) 
        {
             cout<<"Yes"<<endl;
             return;
        }
           
  
        s.insert(arr[i]); 
    } 
    cout<<"No"<<endl;
}


int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    key_pair(arr,n,x);
	    
	}
	return 0;
}
