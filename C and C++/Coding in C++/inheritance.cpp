#include<iostream>
using namespace std;



class vechile{
public:
    vechile(){

        cout<<"Vechile Class\n";

    }


};



class fourwheeler:public vechile{


public:
    fourwheeler(){
            cout<<"four wheeler\n";
    }
};

class car:public fourwheeler{

public:
    car(){
        cout<<"car\n";
    }
};
int main(){

    car ob;
    return 0;



}
