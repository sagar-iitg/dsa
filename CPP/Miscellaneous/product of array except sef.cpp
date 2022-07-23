#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// O(N^2) time complexity
// O(N)   Space Complaexity
void product1(vector<int> v){
    int p=1;
    int n=v.size();
    vector<int> prod;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i!=j){
                          p=p*v[j];

                }

        }
        prod.push_back(p);
        p=1;
    }
    for(auto i:prod){
        cout<<i<<" ";
    }

}

// o(N) complexity
// O(1) space

// Using division operator

void product2(vector<int> v){

    int n=v.size();
    int prod=1;
    for(int i=0;i<n;i++){
        prod=prod*v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=prod/v[i];
    }
    for(auto i:v)
            cout<<i<<" ";



}
void product3(vector<int> v){

    int n=v.size();
    int p=1;
    //cout<<"ss";

    int left[n];
    int right[n];
    for(int i=0;i<n;i++){
        p=p*v[i];
        left[i]=p;
         //cout<<"ss";
    }
    cout<<"Cummulative product of left array"<<endl;
    for(int i=0;i<n;i++)
        cout<<left[i]<<" ";

    cout<<endl;
    p=1;
    for(int i=n-1;i>=0;i--){
        p=p*v[i];
        right[i]=p;
         //cout<<"ss";
    }
    cout<<"Cummulative product of right array"<<endl;
    for(int i=0;i<n;i++)
        cout<<right[i]<<" ";

        cout<<endl;
    int final[n];
    // Boundary Condition

    final[0]=right[1];
    final[n-1]=left[n-2];

    for(int i=1;i<=n-2;i++){


        final[i]=left[i-1] *right[i+1];

    }
    cout<<"Output of function 3"<<endl;
    for(int i=0;i<n;i++)
        cout<<final[i]<<" ";



}

void product4(vector<int> nums){
    int n=nums.size();
    int output[n];
    int p=1;

    for(int i=0;i<n;i++){
        p=p*nums[i];
        output[i]=p;
    }


    p=1;
    for(int i=n-1;i>=1;i--){

        output[i]=output[i-1]*p;
        p=p*nums[i];

    }
    output[0]=p;
    for(int i=0;i< n;i++){
        cout<<output[i]<<" ";
    }



}
int main(){

    vector<int> v={1,2,3,4};
    cout<<"Array is:"<<endl;
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
    cout<<endl<<"Output of function 1"<<endl;
    product1(v);
    cout<<endl;
    cout<<endl<<"Output of function 2"<<endl;
    product2(v);
    cout<<endl;
    cout<<endl<<"----function 3-------"<<endl;
    product3(v);
    cout<<endl;
    cout<<endl<<"Output of function 4"<<endl;
    product4(v);
    cout<<endl;
    return 0;


}
