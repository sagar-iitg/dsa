#include <iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void nearly_sorted_algo(int arr[],int n,int k)
{
    priority_queue<int,vector<int>, greater<int>> minh;
    vector <int> v;
    
    
    for(int i=0;i<n;i++)
    {
        
        minh.push(arr[i]);
        
        if(minh.size()>k)
        {
            v.push_back(minh.top());
            minh.pop();
        }
        
    }
    
    while(minh.size()!=0)
    {
        v.push_back(minh.top());
        minh.pop();
    }
    
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    
    
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