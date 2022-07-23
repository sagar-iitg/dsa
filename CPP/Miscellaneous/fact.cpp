#include<iostream>
using namespace std;



int fact_rec(int n){

    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);

}
int main(){

    int n;
    cin>>n;
    cout<<fact_rec(n);




}
