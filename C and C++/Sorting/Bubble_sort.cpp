#include<iostream>
using namespace std;



void print_array(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}

void swap(int *a,int *b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;

}

void Bubble_sort(int arr[],int n){

    int count_pass=0;
    for(int i=0;i<n-1;i++){ // This for loop is for pass no total n-1 pass 
        count_pass++;
       for(int j=0;j<n-i-1;j++){ // This for loop is for no of comparison
            if(arr[j]<arr[j+1]){  //for increasing and decresing order just change inequality order
                swap(&arr[j],&arr[j+1]);
            }

        }

    }
    cout<<"Total passes is :"<<count_pass<<endl;
    //cout<<endl;



}

void Adaptive_Bubble_sort(int arr[],int n){

    
    int flag=0;
    int count_pass=0;
    for(int i=0;i<n-1;i++){ // This for loop is for pass no total n-1 pass 
        flag=1;
        count_pass++;
       
       for(int j=0;j<n-i-1;j++){ // This for loop is for no of comparison
            if(arr[j]<arr[j+1]){ // for increasing and decresing order just change inequality order
                swap(&arr[j],&arr[j+1]);
                flag=0;
            }
        }
        if(flag)
        {
            cout<<"Total passes is :"<<count_pass<<endl;
            return;
        }
           
        

    }

    cout<<"Total passes is :"<<count_pass<<endl;
    cout<<endl;



}

int main(){


    int arr[]={625,23,9,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    print_array(arr,n);
    cout<<"After Sorting"<<endl;
    Bubble_sort(arr,n);
    print_array(arr,n);
    int a[]={625,23,9,5,4,3,2,1};
    int n1=sizeof(arr)/sizeof(arr[0]);
    cout<<"Adaptive Sorting"<<endl;
    Adaptive_Bubble_sort(a,n1);
    print_array(a,n1);

}