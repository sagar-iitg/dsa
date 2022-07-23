#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(int arr[],int n){

    vector<int> v;
    int a[n];

    cout<<"original  array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=n-1;i>=0;i--){

        a[n-i-1]=arr[i];
    }



    cout<<"reverse array"<<endl;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }





}
int main(){

    int arr[]={1,2,3};

    int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);

}
