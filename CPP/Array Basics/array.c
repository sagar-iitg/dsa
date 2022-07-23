#include<stdio.h>

int main(){

    int arr[]={10,20,30,4};
    // base address
    printf("%d\n",arr);  //array name is pointer and he is 
    // pointing to the 0th element of array
    int *ptr;
    ptr=arr;
    printf("%d\n",ptr);
    printf("%d\n",*arr);//   0th  element of array
    printf("%d",*(arr+2));// 2nd element of array

    return 0;

}