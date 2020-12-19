#include<bits/stdc++.h>
using namespace std;




int solve(int e,int f){


    // Base Condition

    if(f==0 ){
        return 0;
    }
    if(f==1){
        return 1;
    }

    if(e==1){
        return f;
    }


    // k lops
    int ans=INT_MAX;

    for(int k=1;k<=f;k++){

        int temp=1+max( solve(e-1,k-1), solve(e,f-k) );
        ans=min(ans,temp);
    }
    return ans;



}
int main(){

        int e=2;
        int f=36;

        cout<<solve(e,f);
        cout<<endl;
        return 0;
}
