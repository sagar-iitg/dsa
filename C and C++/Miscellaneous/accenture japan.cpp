#include <iostream>
using namespace std;


int sol(int a,int b){
    long long c=a*b;
    int ans=0;
    
    while(c){
        if(c%2==1){
            ans++;
            //cout<<ans;
        }
        c=c/2;
    }
    return ans;
}
int main() {
	// your code goes here
	
	cout<<sol(2,2);
	return 0;
}
