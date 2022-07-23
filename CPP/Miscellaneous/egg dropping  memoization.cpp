
#include<bits/stdc++.h>
using namespace std;

int static dp[11][51];

int solve(int e,int f){


    // Base Condition


    memset(dp,-1,sizeof(dp));

    if(f==0 ){
        return 0;
    }
    if(f==1){
        return 1;
    }

    if(e==1){
        return f;
    }
    if(dp[e][f]!=-1){
        return dp[e][f];
    }

    // k lops
    int ans=INT_MAX;

    int left=0,right=0;

    for(int k=1;k<=f;k++){

            if(dp[e-1][k-1]!=-1)
                 left=dp[e-1][k-1];
            else{
                 left=solve(e-1,k-1);
                 dp[e-1][k-1]=left;
            }


            if(dp[e][f-k]!=-1){
                right=dp[e][f-k];
            }
            else{
                right=solve(e,f-k);
                dp[e][f-k]=right;
            }


        int temp=1+max( left, right ); // optimization of this line
        ans=min(ans,temp);
    }
    return dp[e][f]=ans;



}
int main(){

        int e=4;
        int f=36;

        cout<<solve(e,f);
        cout<<endl;
        return 0;
}
