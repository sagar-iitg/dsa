#include<bits/stdc++.h>
using namespace std;



bool areBracketsBalanced(string expr){

    int n=expr.length();
    stack<char> s;
    char x;
    for(int i=0;i<n;i++){

            if(expr[i]=='(' || expr[i]=='{' || expr[i]=='['){
                s.push(expr[i]);
                continue;
            }

            if(s.size()==0){
                return false;
            }

            if(expr[i]==')'){
                x=s.top();
                s.pop();
                if(x=='{' || x=='['){
                    return false;
                }

            }
            if(expr[i]==']'){
                x=s.top();
                s.pop();
                if(x=='(' || x=='{'){
                    return false;
                }

            }


            if(expr[i]=='}'){
                x=s.top();
                s.pop();
                if(x=='(' || x=='['){
                    return false;
                }

            }






    }
          return s.empty();

}
int main(){


    string expr = "{()}]";


    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;

}
