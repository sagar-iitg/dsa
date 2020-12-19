#include <bits/stdc++.h>
using namespace std;


int sol(int n){
    int ans=0;
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(int i=0;i<=n;i++){
	    auto it=s.begin();

	    cout<<*it<<" "<<endl;
	    ans= *it;
	    
	    s.insert((*it)*2);
	      
	    s.insert((*it)*3);
	    s.erase(it);
	    
	    
	}
	return ans;
}
int main() {
	// your code goes here
	//cout<<endl;
	cout<<sol(2);
	
	
	
	
	
	return 0;
}
