#include<iostream>
using namespace std;


void window(int arr[],int n,int k){


    for(int i=0;i<=n-k;i++){
        int maxm=arr[i];
        for(int j=1;j<k;j++){
            maxm=max(maxm,arr[i+j]);
        }
        cout<<maxm<<" ";

    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
    window(arr,n,k);
    return 0;


}
