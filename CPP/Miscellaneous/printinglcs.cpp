#include<bits/stdc++.h>
using namespace std;

string lcs(string X,string Y,int m,int n){

        int dp[m+1][n+1];

        memset(dp,-1,sizeof(dp));


        //base condition

        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++)
                if(i==0 || j==0)
                    dp[i][j]=0;

        }


        // choice diagram (input small)


        for(int i=1;i<m+1;i++){

            for(int j=1;j<n+1;j++){


                if(X[i-1]==Y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max( dp[i-1][j], dp[i][j-1]);
            }
        }

        //return dp[m][n];

        int i=m;
        int j=n;
        string ans="";

        while(i>0 && j>0){

            if(X[i-1]==Y[j-1]){
                    ans.push_back(X[i-1]);
                    i--;
                    j--;

            }
            else{

                if(dp[i-1][j] > dp[i][j-1]){

                    //ans.push_back(X[i-1]);
                    i--;
                }
                else{

                    //ans.push_back(X[j-1]);
                    j--;
                }
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
}


int main(){


        string X="ABCDGH";

        string Y="AEDFHR";

        int m=X.length();
        int n=Y.length();
        cout<<lcs(X,Y,m,n);


}
