#include <iostream>
#include<vector>
using namespace std;


void fibo(int n)
{
    int v[n];
    v[0]=0;
    v[1]=1;
    for(int i=2;i<=n;i++)
        v[i]=v[i-1]+v[i-2];
        
    
    for(int i=0;i<=n;i++)
        cout<<v[i]<<" ";
    
    
    
}

int main() {
	// your code goes here
	
	int n=10;
    fibo(n);
    
	return 0;
}


