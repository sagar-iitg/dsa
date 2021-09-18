#include<bits/stdc++.h>

using namespace std;





int dp[100][100];

int lcs(string X,string Y,int n,int m){

    if(n==0 || m==0){
        return 0;
    }
    if(dp[n][m]!=-1){
            return dp[n][m];

    }
    if(X[n-1]==Y[m-1]){

        return  dp[n][m]=( 1+lcs(X,Y,n-1,m-1) );
    }
    else{

        return dp[n][m]=max(lcs(X,Y,n,m-1),lcs(X,Y,n-1,m));

    }


}


int main(){


    string X="AGGTAB";
    string Y="GXTXAYB";

    int n=X.length();
    int m=Y.length();
    memset(dp,-1,sizeof(dp));

    cout<<lcs(X,Y,n,m);
    return 0;

}
