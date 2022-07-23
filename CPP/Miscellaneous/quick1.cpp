#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int partition_ss(int arr[],int left,int right  ){


    int pivot=arr[right];
    int i=left;

    for(int j=left; j<right; j++){
        if(arr[j]<=pivot){
            swap(arr[j],arr[i]);
            i++;

        }
    }

    swap(arr[i],arr[right]);
    return i;


}

int partition_r(int arr[],int low,int high){

    srand(time(NULL));
    int random=low+rand() %(high-low);
    cout<<random<<" "<<arr[random]<<endl;
    swap(arr[random],arr[high]);
    return partition_ss(arr,low,high);



}

void quick_sort(int arr[],int low,int high){

    if(low<high){



        int pivot=partition_r(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);


    }
}


int main(){

    int arr[]={-5,-100,25,34,100,-2,1,7,6,8,5,3,4};

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
