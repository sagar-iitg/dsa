#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int compare(int a,int b){
    return a>b;
}

bool anagram(string s1,string s2){

    int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2)
        return false;

    sort(s1.begin(),s1.end(),compare);
    sort(s2.begin(),s2.end(),compare);
    cout<<s1<<endl;
    cout<<s2<<endl;


    for(int i=0;i<n1;i++){
        if(s1[i]!=s2[i])
            return false;
    }
    return true;

}

int main() {
	//code

	    string s1;
	    string s2;
	    cin>>s1>>s2;

	    cout<<anagram(s1,s2);



	return 0;
}
