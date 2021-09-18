#include<iostream>
using namespace std;

bool is_bit_set(int n,int k){
    // 101
    // 001
    //010
    //100
    //starting index with 0
    if(n & 1<<k){
        return true;

    }
    return false;

}
int main(){

    int n,k;
    n=5;
    k=2;
    cout<<is_bit_set(n,k);

    

}

