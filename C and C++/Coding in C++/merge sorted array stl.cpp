#include<bits/stdc++.h>
using namespace std;


int main(){



    int arr1[]={0,1,2,3,4,5,6};
    int arr2[]={7,8,9,10,11};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];

    merge(arr1,arr1+n1,arr2,arr2+n2,arr3);

    for(int i=0;i<n1+n2;i++)
        cout<<arr3[i]<<" ";

    return 0;







}

