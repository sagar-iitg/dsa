#include<bits/stdc++.h>
using namespace std;




int countfreq(string &txt,string &pat){


        int n=txt.length();
        int m=pat.length();
        int res=0;
        for(int i=0;i<=n-m;i++)
        {
            int j;

            for(int j=0;j<m;j++)
             if(txt[i+j]!=pat[j])
                    break;



            if(j == m){
                    cout<<res;
                res++;
                j=0;
            }

        }



        return res;
}



int main(){


    string txt="dhimanman";
    string pat="man";
    cout<<countfreq(txt,pat);
    return 0;

}
