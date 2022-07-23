#include<bits/stdc++.h>
using namespace std;


void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}



int select(int arr[], int i)
{
    
    
   int max_index=i;

    for(int j=0;j<i;j++){

        if(arr[j] > arr[max_index]){
            max_index=j;
        }
    }

    return max_index;
}

void selection_sort(int arr[], int n)
{
   int i;
  
   for (i = n-1; i>=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
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


    int arr[]={90,10,4,5,0,44,-5,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting");
    print_array(arr,n);
    printf("After Sorting");
    selection_sort(arr,n);
    print_array(arr,n);



}




