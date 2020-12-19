#include<bits/stdc++.h>
using namespace std;



int lcs(string X,string Y,int m,int n){

    int dp[m+1][n+1];
    memset(dp,-1,sizeof(dp));
    int ans=0;

    // Base Condition

    for(int i=0;i<m +1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }



    for(int i=1;i<m+1;i++){

        for(int j=1;j<n+1;j++){

            if(X[i-1]==Y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);


            }

            else
                dp[i][j]=0;
        }
    }
    return ans;
}
int main(){




        string X="GeeksforGeeks";
        string Y="GeeksQuiz";
        int m=X.length();
        int n=Y.length();
        cout<<lcs(X,Y,m,n);



}
