#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int first(vector<int> &v,int h){
    int start=0;
    int end=v.size()-1;
    int res=-1;
    
    while(start<=end){
        
        int mid=start+(end-start)/2;
        
        
        if(h==v[mid]){
            res=mid;
            end=mid-1;
        }
        else if(v[mid]<h){
            start=mid+1;
            
        }
        else{
            end=mid-1;
            
        }
    }
    
    return res;
    
}



int last(vector<int> &v,int h){
    int start=0;
    int end=v.size()-1;
    int res=-1;
    
    while(start<=end){
        
        int mid=start+(end-start)/2;
        
        
        if(h==v[mid]){
            res=mid;
            start=mid+1;
        }
        else if(v[mid]<h){
            start=mid+1;
            
        }
        else{
            end=mid-1;
            
        }
    }
    return res;
    
    
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	//vector<int> v={2,4,5,5,6,6,6,6,6,9,10,10000};
	vector<int> v={3,45,45,67,1000};
	int h=45;
	
	int f=first(v,h);
	//cout<<f<<endl;

	int l=last(v,h);
	//cout<<l<<endl;
	int ans=l-f+1;
	cout<<ans;
	
	return 0;
}
