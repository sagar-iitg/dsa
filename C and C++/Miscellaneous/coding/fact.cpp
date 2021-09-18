#include <iostream>
using namespace std;



int  fact(int a)
{
    int output;
    if(a==1)
        return 1;

    else
    {
         output=a*fact(a-1);
        return(output);

    }




}

int main() {
	//code


	int t,a,ans;
	cin>>t;
	while(t--)
    {
        	cin>>a;
        ans=fact(a);
        cout<<ans<<endl;


    }


}
