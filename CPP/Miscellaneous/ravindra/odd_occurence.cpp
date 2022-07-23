#include <iostream>
using namespace std;

int odd_occurence(int *arr,int n){
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	cout<<odd_occurence(arr,n)<<endl;
	}
	return 0;
}