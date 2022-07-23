#include<iostream>
using namespace std;

// left shift operator

int main(){

    unsigned char a=5;   // 8bit and 1 byte
    //00000101
    //left shift 2^5
    //right shift 5/2=2 (rem)

    printf("a=%u",a);
    printf("\n");
    printf("a<<1=%d",a<<1);
    printf("\n");
    printf("a>>1=%d",a>>1);
    return 0;




}