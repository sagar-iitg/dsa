#include<iostream>
using namespace std;

 
void quick_sort(int arr[],int n){

    

}

void print_array(int arr[],int n){


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

int main(){


    int arr[]={7,4,8,1,2,9,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting\n");
    print_array(arr,n);
    printf("After Sorting\n");
    quick_sort(arr,n);



}