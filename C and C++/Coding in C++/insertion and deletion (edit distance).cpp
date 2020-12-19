#include<bits/stdc++.h>
using namespace std;


int edit(string X,string Y,int m,int n){

        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));

        if(m==0 ||  n==0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }

        if(X[m-1]==Y[n-1]){
            dp[m][n]=1+edit(X,Y,m-1,n-1);

        }
        else{

            dp[m][n]=max(edit(X,Y,m-1,n),edit(X,Y,m,n-1));

        }



            return dp[m][n];



}

int  main(){


    string X="heap";
    string Y="pea";

    int m=X.length();
    int n=Y.length();

    int c=edit(X,Y,m,n);

    int insertion=m-c;
    int deletion=n-c;
    cout<<insertion<<" "<<deletion<<" ";



}
