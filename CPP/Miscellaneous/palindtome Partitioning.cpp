#include<bits/stdc++.h>
using namespace std;

//int static dp[1000][1000];
//solve function returns no of partition in string such that string becomes palindrome

bool palindrome(string s,int begin,int end){

        int count=0;
        int n=s.length();


    while(begin <=end){

        if(s[begin]!=s[end] ){

           return false;
        }
            begin++;
            end--;

    }



        return true;

}

int solve(string s,int i,int j){

    //base condition
    if(i>=j){
        // i>j size of string zero
        // i==j size of string 1 (length of one string is palindrome )
        return 0;

    }
    // if whole string is palindrome then return zero(because partition is zero)

    if(palindrome(s,i,j)){
        return 0;
    }

    // loop
    int ans=INT_MAX;
    for(int k=i;k<j;k++){

        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        ans=min(ans,temp);
    }
    return ans;



}
int main(){



    string s="ababbbabbababa";
    int n=s.length();
    //memset(dp,-1,sizeof(dp));
    cout<<solve(s,0,n-1);





}
