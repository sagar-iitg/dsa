#include <iostream>
#include<bits/stdc++.h>
using namespace std;


	

void insert(stack<int> &s,int ele){
    
    
    if(s.size()==0){
        s.push(ele);
        return;
    }
    
        int temp=s.top();
        s.pop();
        insert(s,temp);
        return;

}
void reverse(stack<int> &s){
    
    if(s.size()==1)
        return;
    
    int t=s.top();
    s.pop();
    reverse(s);
    insert(s,t);
    
    
    
    
}
 
  stack<int> s;  
int main() {
 
    
    s.push(5);
    s.push(4);
    s.push(3);
    cout<<s.top()<<" ";
    reverse(s);
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    
    return 0;
}
	

	

