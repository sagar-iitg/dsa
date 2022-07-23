#include<iostream>
using namespace std;

int main(){



    int nm2=2000;
    int nm3=10000;
    int nm5=500;

    int mn= (nm2<nm3) ?( nm2 < nm5 ? nm2 : nm3 ) :(nm3 >nm5 ? nm5:nm3);
    cout<<mn;
    return (mn);



}

