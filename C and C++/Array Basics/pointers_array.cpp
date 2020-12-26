#include<iostream>
#include<iomanip>
using namespace std;


int main(){


    int arr[]={10,-5,8,0,444};
    int n=sizeof(arr)/sizeof(arr[0]);
   // cout<<setfill('*')<<setw(10);
    cout<<"Printing array value (arr[i]): ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<", ";
    
    cout<<"\nPrinting array value  (*(aar+i)): ";
    for(int i=0;i<n;i++)
        cout<<*(arr+i)<<", ";
    
    cout<<"\nPrinting Address (arr+i): "<<setw(13);
    for(int i=0;i<n;i++)
        cout<<(arr+i)<<", ";
    cout<<"\nPrinting Address (&arr[i]): ";
    for(int i=0;i<n;i++)
        cout<<&arr[i]<<", ";

   cout<<"\nClearing Confusion: (*arr+i) :";
   for(int i=0;i<n;i++)
        cout<<*arr+i<<", ";
    

    

    
        

    

}