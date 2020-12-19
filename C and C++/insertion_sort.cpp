#include<iostream>
using namespace std;

int *insertion_sort(int *arr,int n){
    
    for(int i=1;i<n;i++){

        int key=arr[i];
        int j=i-1;
        // increasing sorting
        // if we want decreasing order just change
        //arr[j]<key
        
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
    return arr;



}
int main(){


    
    int arr[]={2,0,9,3,60,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int *ptr=insertion_sort(arr,n);
    
    printf(" Insertion Sort\n");

    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";

    }


}

