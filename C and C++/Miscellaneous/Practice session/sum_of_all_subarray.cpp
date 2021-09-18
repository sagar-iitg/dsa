#include <iostream>
using namespace std;

void sum_of_array(int arr[],int n)
{
      //int x=10^9+7;
    long long sum=0,temp=0;

    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i]*(n-i)*(i+1);
    }

   cout<<sum;
   cout<<endl;
}

int main() {


	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	        cin>>arr[i];
	   sum_of_array(arr,N);


	}
	return 0;
}































#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)

}







