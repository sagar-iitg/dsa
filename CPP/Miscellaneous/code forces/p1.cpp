#include<iostream>
using namespace std;

int fun(int n,int k)
{

        int div;

        while(k)
        {
            div=n%10;

            if(div==0)
            {
                n=n/10;


            }
            else
            {

                n=n-1;
            }
            k=k-1;

        }
        return(n);


}
int main()
{
    int n,k,output;
    cin>>n;
    cin>>k;
    output=fun(n,k);
    cout<<output;



}
