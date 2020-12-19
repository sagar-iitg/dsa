#include<bits/stdc++.h>
using namespace std;



int lps(string X,int m){

        string Y=X;
        reverse(Y.begin(),Y.end());
        int n=Y.length();
        cout<<n<<endl;

        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));

        for(int i=0;i<n;i++){
            cout<<Y[i];
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            cout<<X[i];
        }
        cout<<endl;

        // Initialization
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){

                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        // choice diagram


        for(int i=1;i<m+1;i++){

            for(int j=1;j<n+1;j++){

                if(X[i-1]==Y[j-1]){

                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{

                    dp[i][j]=std::max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[m][n];

}
int main(){


    string X="geeksforgeeks";


    int  m=X.length();



    cout<<lps(X,m);
    return 0;
}
