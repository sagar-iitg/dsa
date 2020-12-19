#include<iostream>
#include<bits/stdc++.h>

using namespace std;




int f(int arr[],int n){

    sort(arr,arr+n);

    int sum=0;

    cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] && i>=0 && i<=n-1){
            arr[i]=0;
            arr[i+1]=0;
        }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }


    return sum;
}





int main(){

    int arr[]={2,2,3,5,6,5,3,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);


    cout<<f(arr,n);
}
