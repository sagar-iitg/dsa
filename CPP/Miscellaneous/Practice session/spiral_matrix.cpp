#include <iostream>
using namespace std;


/*
void spiral_matrix_print(int *arr,int m,int n){

    int dir=0;
    int left=0,right=m-1,bottom=n-1,top=0;

    while(top<=bottom && left<=right){

        if(dir==0)
        {
            for(int i=left;i<right;i++)
                cout<<arr[top][i];
            top=top+1;


        }
        else if(dir==1){

             for(int i=top;i<bottom;i++)
                cout<<arr[i][right];
            right=right-1;



        }

        else if(dir==2){
            for(int i=right;i>left;i--)
                cout<<arr[bottom][i];
            bottom=bottom-1;



        }

         else if(dir==3){

             for(int i=bottom;i>top;i--)
                cout<<arr[i][left];
            left=left+1;



        }

        dir=(dir+1)%4;



    }




}
*/

/*
void matrix(int *mat,int m,int n){


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                cout<<mat[i][j];
        }

}
*/
int main() {
	//code

	ios_base::sync_with_stdio();
	cin.tie(NULL);
	int m=2;
	int n=10;
    int mat[m][n] = {   { 9 ,54, 33, 58, 88, 45, 57 ,9 ,95, 98},
                        { 14 ,53 ,46 ,65 ,71 ,54 ,52, 2 ,77 ,67 },


                    };

    //spiral_matrix_print((int *)mat,m,n);
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++)
                cout<<mat[i][j]<<" ";
                cout<<"\n";
            }



    int dir=0;
    int left=0,right=m-1,bottom=n-1,top=0;

    while(top<=bottom && left<=right){

        if(dir==0)
        {
            for(int i=left;i<=right;i++)
                cout<<mat[top][i]<<" ";
            top=top+1;


        }
        else if(dir==1){

             for(int i=top;i<=bottom;i++)
                cout<<mat[i][right]<<" ";
            right=right-1;



        }

        else if(dir==2){
            for(int i=right;i>=left;i--)
                cout<<mat[bottom][i]<<" ";
            bottom=bottom-1;



        }

         else if(dir==3){

             for(int i=bottom;i>=top;i--)
                cout<<mat[i][left]<<" ";
            left=left+1;



        }

        dir=(dir+1)%4;



    }




	return 0;

}
