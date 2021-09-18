#include <iostream>
using namespace std;
void  sub_array_with_given_sum(int arr[],int n,int sum)
{
    int s=0;
     int left=0,right=0;

    for(int i=0;i<n; i++)
    {
        if(s<sum)
            s=s+arr[i];
            right=right+1;
        else
            left=left+1;
            s=s-arr[left];

    }

}


int main() {
	//code



	 int arr[]={3,4,5,6,7};
	 int N=5;
	 int sum=13;
	 sub_array_with_given_sum(arr,N,sum);


	return 0;
}




