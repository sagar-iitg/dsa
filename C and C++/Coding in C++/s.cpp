

#include<bits/stdc++.h>
using namespace std;



int solve(string S){

    int n=S.length();
    if(n==0 || n==1){
        return n;
    }

    int a=0,c=0,na=0,res=0;
    for(int i=0;i<n;i++){

            if(S[i]=='A'){
                a++;
            }
            else if(S[i]=='C'){
                c++;
            }
            else{
                na++;
            }

    }
    if(na!=0){
        if(a>c){
            res=a+na-c;
        }
        else{
            res=c+na-a;
        }

    }
    else{
        res=max(a,c);
    }
    return res;
}


int main(){


    string s="AAA????C";
    cout<<solve(s);


}
