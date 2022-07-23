#include<iostream>
#include<array>
using namespace std;
int main()
{

     array <int ,8> data_array={1,2,3,4,5,6};

     /*cout<<data_array[2];
     cout<<data_array.front();
     cout<<data_array.back();*/

     data_array.fill(10);
     int i;
     for(i=0;i<7;i++)
        cout<<data_array[i]<<" ";




}


