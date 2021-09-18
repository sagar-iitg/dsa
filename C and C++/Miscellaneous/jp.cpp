#include<iostream>
#include<bits/stdc++.h>

using namespace std;




int f(int arr[],int n){

    unordered_map<int,int> m;


    for(int i=0;i<n;i++){
        m[arr[i]]++;

    }

    int sum=0;
    for(auto i:m){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
        if(i.second==1){
            sum=sum+i.first;
        }
    }


    return sum;
}





int main(){

    int arr[]={2,2,3,4,4,5,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<f(arr,n);
}
