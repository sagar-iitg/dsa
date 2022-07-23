#include<iostream>
using namespace std;

template <typename T>


void fun(const T&x){

    static int count=0;
    cout<<x<<" "<<count;
    ++count;
    return;
}

int main(){

    fun<int> (1);
    cout<<endl;
    fun<int> (1);
    cout<<endl;
    fun<double>(1.1);
    cout<<endl;
    return 0;


}