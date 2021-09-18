#include<bits/stdc++.h>
using namespace std;


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


int main(){

    string s="nitin";

    int n=s.length();

    cout<<palindrome(s,0,n-1);

}
