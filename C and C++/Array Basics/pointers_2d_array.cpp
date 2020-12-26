#include<iostream>
using namespace std;

int main(){

    //ways to declare arrays
    int arr[2][3]={1,2,3,
                    4,5,6};
    
    //int arr[2][3]={{1,2,3},{4,5,6}};

    /*
        Each element is not an integer 
        it is 1d array of 3 integer
        int *p=arr // compilation error
        arr(pointer to 1 d array)

        int (*p)[3]=arr; // p is a pointer of 1d array whose size is 3;

    */
   //1,2,3,  4,5,6
   // arr[0]  arr[1]
   printf("array Elmements\n");
   for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           cout<<*(*(arr+i)+j)<<" ";
       }
   }
   cout<<endl;

   

    int (*p)[3]=arr;
    cout<<"arr        : "<<arr<<endl;
    cout<<"&arr[0]    : "<<&arr[0]<<endl;
    cout<<"arr[0]     : "<<arr[0]<<endl;
    cout<<"&arr[0][0] : "<<&arr[0][0]<<endl;
    cout<<"p          : "<<p<<endl;
    cout<<"*arr       : "<<*arr<<endl;
    
  





}