#include<iostream>
using namespace std;

int set_kth_bit(int n,int k){
    return (n | 1<<k);
}
int main(){

    int n=10;
    int k=2;
    cout<<set_kth_bit(n,k);

}