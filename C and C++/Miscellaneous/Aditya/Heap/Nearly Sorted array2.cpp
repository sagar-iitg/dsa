
#include <iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void nearly_sorted_algo(int arr[],int n,int k)
{
    priority_queue<int,vector<int>, greater<int>> minh(arr,arr+k+1);
    vector <int> v;
    
    int index=0;
    for(int i=k+1;i<n;i++)
    {
        arr[index++]=minh.top();
        minh.pop();
        minh.push(arr[i]);
            
        
        
        
        
    }
    while(minh.empty()==false){
        arr[index++] = minh.top(); 
        minh.pop(); 
    }
    
     for (int i = 0; i <n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}



















int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    nearly_sorted_algo(arr,n,k);  
	    
	}
	return 0;
}