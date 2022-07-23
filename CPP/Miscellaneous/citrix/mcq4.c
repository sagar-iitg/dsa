#include<stdio.h>



enum power{
    Dalai,
    Valadmir=3,
    Trump,
    Jinping
};
int main(){

    float leader[Dalai+Jinping]={1.f,2.f,3.f,4.f,5.f};

    enum power p=Trump;
    printf("\n%0.f",leader[p>>1+1]);
    return 0;


}
