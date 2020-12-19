#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main(){
    
    vector<vector<int>> v;
    v={ {1,2,3},
        {4,5},
        {6,7,8},
        {9,10,11,22},
        {55,00},
        {-2,-44},
        {0},
        {19,41,61,13}
    
    };

    cout<<endl<<"----------"<<endl;
    cout<<"No of rows in 2d vector is: "<<v.size()<<endl;
    // we can't say exact no of elements in each row
    // no of elements in rows 1 and rows2 may be different

    cout<<endl<<"2d vector is: "<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"----------"<<endl;


}
