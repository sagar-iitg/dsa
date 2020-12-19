#include<bits/stdc++.h>
using namespace std;



int sum(vector<int> arr){

    int first=0,second=0;

    if(arr[0]>arr[1]){
        first=arr[0];
        second=arr[1];
    }
    else{

        first=arr[1];
        second=arr[0];
    }

    for(int i=2;i<arr.size();i++){

        // arr[i] is greater then first and second both
        if(arr[i]>first && arr[i]>second){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>=second && arr[i]< first){
            second=arr[i];
        }
    }
    return (first+second);



}

int main(){

    vector<int> arr={10,5,25,7,8,9};


    cout<<sum(arr);




}
