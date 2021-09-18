#include<bits/stdc++.h>
using namespace std;


string upper(string &s){



    transform(s.begin(),s.begin()+1,s.begin(),::tolower);
    return s;

}




int main(){


    string s="SagarKUmar";
    cout<<s<<endl;
    cout<<upper(s)<<endl;





}
