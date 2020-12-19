#include<iostream>
using namespace std;



int fun(int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+i;
    }
    return sum;

}
int main(){

    cout<<fun(6);


}
