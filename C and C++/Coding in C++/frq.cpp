#include<bits/stdc++.h>
using namespace std;



void frequencycount(vector<int>& arr,int n)
{
    int freq[40001]={0};
    for(auto i:arr)
    {

        freq[i]++;
    }
    for(int i=1;i<=n;i++)
    {
        arr[i-1] = freq[i];
    }

}
// Driver program to test above function
int main()
{
    vector<int> arr = {3, 3, 3, 3};
    int n = arr.size(); // # of elements
    cout<<n<<endl;
    frequencycount(arr,n);
    //cout<<arr[-1]<<" "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
