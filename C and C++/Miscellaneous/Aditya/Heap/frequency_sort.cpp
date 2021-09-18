#include <iostream>
#include<map>
#include<unordered_map>
#include<queue>
using namespace std;

typedef pair<int,int> p;

void frequency_sort(int arr[],int n)
{
    map <int,int> mp;
    
    
    priority_queue<p> maxh;
    
    
    for(int i=0;i<n;i++)
    {
         mp[arr[i]]++;
    }
    
 

       
    
    
    for(auto i=mp.begin();i!=mp.end();i++)
    {
         //cout<<i->first<<" ";
      
        //cout<<i->second<<" ";
          cout<<endl;
        maxh.push({i->second,i->first});
        
        
    }
    //cout<<"size"<<maxh.size()<<endl<<maxh.top().first<<endl<<maxh.top().second<<endl;
    
    
   while(maxh.size()>0)
   {
       int freq=maxh.top().first;
       int ele=maxh.top().second;
       for(int i=1;i<=freq;i++)
       {
           cout<<ele<<" ";
       }
           maxh.pop();
       
      
   }
    cout<<endl;
  
}


int main() {
    
	// your code goes here
	
	
	int arr[]={5,5,4,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);

	frequency_sort(arr,n);
	
	return 0;

    
}
