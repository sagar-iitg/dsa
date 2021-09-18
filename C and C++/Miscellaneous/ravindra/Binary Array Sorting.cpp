#include <iostream>
using namespace std;


void binary_array_sorting(int arr[],int n){
    
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c++;
        }
    }
    for(int i=0;i<c;i++)
    {
        arr[i]=0;
    }
    for(int i=c;i<n;i++)
    {
        arr[i]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
	    binary_array_sorting(arr,n);
	}
	return 0;
}