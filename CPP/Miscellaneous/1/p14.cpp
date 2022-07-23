#include<iostream>
using namespace std;
int main()
{

    int a[2][3]={{1,2,3},{2,3,4}};
    int (*p)[3]=a;
    cout<<a<<" "<<&a[0]<<" "<<&a[0][0]<<endl;
    //cout<<&a[0][1]<<endl;
    cout<<&a[0][0]<<" "<<a[0]<<" "<<*a<<endl;
}
