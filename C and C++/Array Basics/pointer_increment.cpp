#include<iostream>
using namespace std;

int main(){

    int arr[3]={10,20,30};
    cout<<arr<<endl;
    int *p;
    p=arr;
    p++;
    cout<<p<<endl;
    cout<<"This will not work -------  ( ++arr  )     -----Compilation error will come"<<endl;
    return 0;
    
}