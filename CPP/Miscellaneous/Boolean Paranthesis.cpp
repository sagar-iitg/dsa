#include<bits/stdc++.h>
using namespace std;



int solve(string s,int i,int j,bool is_true){





    // base condition  2nd step
    if(i>j){
        return false;
    }
    else if(i==j){


        if(is_true==true)
            return s[i]=='T';
        else
            return s[i]=='F';


    }

    // 3rd step k loops

    int ans=0;
    for(int k=i+1;k<=j-1;k=k+2){


        int lt=solve(s,i,k-1,true);
        int lf=solve(s,i,k-1,false);
        int rt=solve(s,k+1,j,true);
        int rf=solve(s,k+1,j,false);


        if(s[k]=='&'){
            if(is_true==true)
                ans=ans+lt*rt;
            else
                ans=ans+lt*rf+lf*rt+lf*rf;

        }
        else if(s[k]=='|'){
                if(is_true==true)
                ans=ans+lt*rf+lf*rt+lt*rt;
            else
                ans=ans+lf*rf;

        }
         else if(s[k]=='^'){
                if(is_true==true)
                ans=ans+lt*rf+rt*lf;
            else
                ans=ans+lf*rf+rt*lt;

        }


    }
    return ans;







}
int main(){


    string s="T|T&F^T";

    int n=s.length()-1;

    cout<<solve(s,0,n,true); // 1st step i and j values




}
