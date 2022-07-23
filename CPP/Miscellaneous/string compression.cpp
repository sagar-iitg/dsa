#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char* CompressString(char *s,int l){


    char *temp;
    temp=(char*)malloc(l * sizeof (char));
    int a=0;
    while(a<l-1){
            int i=1;
            char c=s[a];
            while(s[a]==s[a+1]){
                i++;
                a++;
            }
            temp[i]=c;
            if(i>1)
                temp.append(to_string(i));
            a++;
    }
    return(temp);

}

int main(){

    char str[]="aaaaabbbccccccccdaa";


    int n=sizeof(str)/sizeof(str[0]);
    int i=0;
    while(str[i]!=0){
        cout<<str[i];
        i++;
    }
     cout<<endl;
    string s=CompressString(str,n);
    cout<<s;

}
