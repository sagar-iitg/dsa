#include <iostream>
#include<vector>

using namespace std;


void next(vector<int> &v){
    
    int n=v.size();
    vector<int> ans;
    
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        int next=-1;
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                next=v[j];
                break;
                
            }
        }
        ans.push_back(next);
    }
    
    for(auto i:ans){
        cout<<i<<" ";
    }
}
int main() {
	// your code goes here
	
	vector<int> v;
	
	v.push_back(25);
	v.push_back(19);
	v.push_back(20);
	v.push_back(21);
	v.push_back(7);
	v.push_back(0);
	
	 for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
	next(v);
	
	
	return 0;
}
