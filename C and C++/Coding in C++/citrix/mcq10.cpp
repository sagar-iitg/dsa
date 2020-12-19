
#include<iostream>
using namespace std;

template<unsigned n,unsigned r>
struct Enumerate{

    enum{
    value=(n+Enumerate<n-1,r-1>::value)
    };
};

template <unsigned n>
struct Enumerate <n,0>{
    enum {value=0};
};


int main(){

    cout<<Enumerate<5,5>::value;

}
