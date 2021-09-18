
#include <bits/stdc++.h>
using namespace std;


int lps(string X,string Y,int m,int n){


    int dp[m+1][n+1];
    memset(dp,-1,sizeof(dp));

    if(m==0 || n==0){
        return 0;
    }

    if(X[m-1]==Y[n-1]){
        dp[m][n]=1+lps(X,Y,m-1,n-1);
    }
    else{
        dp[m][n]=std::max(lps(X,Y,m-1,n),lps(X,Y,m,n-1));

    }

    return dp[m][n];


}
int main() {
	//code



	    string X="aebcbda";

	    int m=X.length();
	    string Y=X;
        reverse(Y.begin(),Y.end());
        int n=Y.length();
        for(int i=0;i<m;i++)
                cout<<X[i];
        cout<<endl;

        for(int i=0;i<n;i++)
                cout<<Y[i];
            cout<<endl;
	    int ans=m-lps(X,Y,m,n);
	    cout<<ans;




	return 0;
}
