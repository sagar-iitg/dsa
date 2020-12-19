#include<bits/stdc++.h>
using namespace std;



int lcs(string X,string Y,int m,int n){


    int dp[m+1][n+1];

    memset(dp,-1,sizeof(dp));

    // Base Condition
    // Initialization

    for(int i=0;i<m+1;i++){

        for(int j=0;j<n+1;j++){

            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    // choice diagram
    //smallest input

    /*for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/


    for(int i=1;i<m+1;i++){

        for(int j=1;j<n+1;j++){

                if(X[i-1]==Y[j-1]){

                     dp[i][j]= 1+dp[i-1][j-1];
                }
                else{

                     dp[i][j]=max( dp[i-1][j] , dp[i][j-1] );

                }


        }
    }
    int ans =m+n-dp[m][n];
    return ans;


}


int main(){


        string X="ABC";
        string Y="AC";
        int m=X.length();
        int n=Y.length();
        cout<<lcs(X,Y,m,n);


}
