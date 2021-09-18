#include<bits/stdc++.h>

using namespace std;



int MIN(int a,int b){

    if(a>b){
        return b;
    }
    return a;

}
int min_ele_array(int arr[],int n){


    int ans=INT_MAX;
    int temp;
    for(int i=0;i<n;i++){

        temp=MIN(arr[i],arr[i+1]);
        ans=MIN(temp,ans);

    }
    return ans;



}
int main(){


    int arr[]={1,56,4,3,0,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Scratch Implementaion\n");
    cout<<min_ele_array(arr,n);
    printf("\nSTL library");
    cout<<endl<<(*min_element(arr,arr+n));
}