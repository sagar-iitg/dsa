#include<iostream>
using namespace std;

int main()
{

    int A[4][3]={{1,1,2},{2,1,3},{3,1,4},{4,1,5}};


    cout<<"Original Matrix"<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
            cout<<A[i][j]<<" ";

        cout<<endl;

    }



    cout<<"Transpose Matrix"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            cout<<A[j][i]<<" ";

        cout<<endl;

    }








}
