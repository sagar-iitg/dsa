#include<bits/stdc++.h>
using namespace std;


void solve(string str){
    int n=str.length();

    for(int i=0;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            //for(int k=i;k<=j;k++){
                //cout<<str[k];
                cout<<str.substr(i,j);
            //}

            cout<<endl;
        }
    }

}


int main(){

    string str="abcd";
    solve(str);
    string s="k";
    cout<<s.substr(0,1);

}
