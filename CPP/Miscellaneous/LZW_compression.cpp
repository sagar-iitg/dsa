#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string CompressString(string &s){


    string temp;
    int l=s.length();
    int a=0;
    while(a<l-1){
            int i=1;
            char c=s[a];
            while(s[a]==s[a+1]){
                i++;
                a++;
            }
            temp.push_back(c);
            if(i>1)
                temp.append(to_string(i));
            a++;
    }
    return(temp);

}

int main(){

    string str="aaaaabbbccccccccdaa";
    for(auto i:str){
        cout<<i;
    }
    cout<<endl;
    string s=CompressString(str);
    cout<<s;

}
