#include<iostream>
using namespace std;

#define R 3
#define C 6

void spiral(int arr[R][C],int m,int n){

  
    int start_row=0,end_row=m;
    int start_column=0,end_column=n;

    //while(start_row<m && start_column<n){

        for(int i=start_column;i<end_column-1;i++){
            cout<<arr[start_row][i]<<" ";

        }
        for(int j=start_row;j<end_row-1;j++){
            cout<<arr[j][end_column-1]<<" ";

        }
        //cout<<endl<<end_column<<end_row;
        for(int k=end_column-1;k>start_column;k--){
            cout<<arr[end_row-1][k]<<" ";

        }
        for(int l=end_row-1;l>start_row;l--){
            cout<<arr[l][start_column]<<" ";

        }


    //}



}



int main(){


    int arr[R][C]={ { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
     
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiral(arr,R,C);


    return 0;

}