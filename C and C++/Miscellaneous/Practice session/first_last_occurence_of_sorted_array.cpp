#include <iostream>
using namespace std;


int first_occurence(int arr[],int n,int x)
{

    int start=0;
    int last=n-1;
    int first_occ=-1;
    while(start<=last)
    {
        int mid=start+(last-start)/2;
        if(arr[mid]==x)
        {
            first_occ=mid;
            last=mid-1;
        }
        else if(arr[mid]>x)
            last=mid-1;
        else
            start=mid+1;


    }
    return(first_occ);
}





int last_occurence(int arr[],int n,int x)
{

    int start=0;
    int last=n-1;
    int last_occ=-1;
    while(start<=last)
    {
        int mid=start+(last-start)/2;
        if(arr[mid]==x)
        {
            last_occ=mid;
            start=mid+1;
        }
        else if(arr[mid]>x)
            last=mid-1;
        else
            start=mid+1;


    }
    //if(last_occ==-1)

     return(last_occ);

}

int main()
{
	//code

	int T;
	cin>>T;
	while(T--)
	{
        int a,b;
	    int n,x;
	    int out=-1;
	    cin>>n;
	    cin>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];

	   a=first_occurence(arr,n,x);
	   b=last_occurence(arr,n,x);

	   if(a==-1 && b==-1)
	   {
	        cout<<"-1";

	   }

	   else
	   {
	        cout<<a<<" "<<b<<endl;
	   }








	}
	return 0;
}
