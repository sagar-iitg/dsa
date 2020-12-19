#include<iostream>
using namespace std;
class DoubleInt {

    double d;
    int i;
public:
    DoubleInt(){
        d=0;
        i=0;
    }


    DoubleInt(double _d) : d(_d),i(0){}
    DoubleInt(int _i) :d(0),i(_i) {}
    void print(){
        cout<<d<<"-"<<i<<endl<<endl;
    }




};


int main(){

    DoubleInt di;
    di.print(); //default constructor 0 and 0
    di=10; //  0 10
    di.print();//int constructor(parametrized)
    di=10.1;// 10.1 0
    di.print();// double constructor

}
