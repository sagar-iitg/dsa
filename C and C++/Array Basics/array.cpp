#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,30,4};
    printf("Base address of array: ");
    printf("%d ",arr);  // base address   //array name is pointer and he is 
    printf(" ----Address is in decimal form (used printf function)\n");
    printf("Base address of array: ");
    cout<<arr; //output is in hexadecimal // pointing to the 0th element of array
    printf(" ----Address is in hexadecimal (used cout)\n");
    cout<<"size of integer : "<<sizeof(int)<<" Byte "<<endl;
    cout<<"Address of next element : "<<" ";
    cout<<arr+1<<endl;// address of next element
    printf("0th  element of array :");
    printf("%d\n",*arr);//   0th  element of array
    printf("2nd  element of array :");
    printf("%d",*(arr+2));// 2nd element of array

    return 0;

}