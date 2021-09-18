#include <iostream>
using namespace std;


void print(int n)
{
    if(n==1)
    {
        cout<<n;
        return;
        
    }
      
    print(n-1);
     cout<<n;
 
    
    
}


int main() {
	// your code goes here
	//cout<<"hh";
	print(7);
	return 0;
}
