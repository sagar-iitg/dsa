#include <iostream>
#include<algorithm>
using namespace std;


bool compare(int a,int b){
    return a>b;
}


int main() {
	// your code goes here
	int arr[]={1,2,45,-2,43,45};
	int n=6;
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	return 0;
	
}
