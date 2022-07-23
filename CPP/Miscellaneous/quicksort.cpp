#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void swap(int *a,int *b){

    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int left,int right  ){


    int pivot=arr[right];
    int i=left;
    for(int j=left;j<right;j++){
        if(arr[j]<=pivot){
            swap(&arr[j],&arr[i]);
            i++;
        }
    }
    swap(&arr[i],&arr[right]);

    cout<<"pivot "<<arr[i]<<" "<<i;
    cout<<endl;
    for(int x=0;x<i;x++)
        cout<<arr[x]<<" ";
    cout<<" -- ";
    for(int y=i;y<right;y++)
        cout<<arr[y]<<" ";

    cout<<endl;



    return i;


}

void quick_sort(int arr[],int low,int high){

    if(low<high){
            //cout<<"low"<<low<<" ";


        int pivot=partition(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);


    }
}


int main(){

    int arr[]={2,1,7,6,8,5,3,4};

    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick_sort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
