#include<bits/stdc++.h>
using namespace std;


int static dp[100][100];

bool ispalindrome(string s,int begin,int end){


    while(begin<end){

        if(s[begin]!=s[end])
            return false;
        begin++;
        end--;
    }
    return true;

}
int solve(string s,int i,int j){

    if(i>=j){
        return 0;
    }
    if(ispalindrome(s,i,j)){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        ans=min(ans,temp);
    }


    return dp[i][j]=ans;


}
int main(){



    string s="sagar";

    int n=s.length();
    memset(dp,-1,sizeof(dp));
    cout<<solve(s,0,n-1);




}
