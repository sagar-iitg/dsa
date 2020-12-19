#include<iostream>
using namespace std;


void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}


void selection_sort(int *arr,int n){

    // 10,4,5,0,44

    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){

                //only chnage inequality sign for increasing order
            if(arr[j] > arr[min_index] )
                    min_index=j;
            



        }
        swap(&arr[i],&arr[min_index]);


    }



}

void print_array(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){


    int arr[]={10,4,5,0,44,-5,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting");
    print_array(arr,n);
    printf("After SortingSorting");
    selection_sort(arr,n);
    print_array(arr,n);



}




