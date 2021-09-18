#include <iostream>
using namespace std;



int main()
{
    int t=0,a=0,b=0,h=0;


        	cin>>a>>b;

	    for(h=a<b?a:b; h>=1; h--)
	    {
	        //cout<<h<<endl;

	        if(a%h==0 && b%h==0)
	            break;
	    }





	       cout<<endl<<h<<endl;






	return 0;
}
