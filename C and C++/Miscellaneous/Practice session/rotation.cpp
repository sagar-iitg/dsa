#include <iostream>
using namespace std;


int rotation(int arr[],int n)
{


  int low=0;
  int high=n-1;
  int prev=-1;
  while(low<=high)
  {
      int mid=low+(high-low)/2;
      if(mid==low || mid==high)
      {
          return prev;

      }
      else if(arr[mid]<=arr[low])
      {
          prev=mid;
          high=mid-1;
      }
      else if(arr[mid]>=arr[high])
      {
          prev=mid;
          low=mid+1;

      }

  }

}


int main() {
	//code


	int t;
	cin>>t;
	int out;

	while(t--)
	{
	    int n;
	    cin>>n;
	      int arr[n];

	    for(int i=0;i<n;i++)
	    {
	            cin>>arr[i];
	    }

	    out=rotation(arr,n);
	    cout<<out<<endl;
	}
	return 0;
}
