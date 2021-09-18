#include<iostream>
#include<cstdlib>
using namespace std;

int fun(int a,int b)
{
    int moves=0;



    while(a%b!=0)
    {
        a=a+1;
        moves++;



    }
        return(moves);


    }








int main()
{
    int t;
    cin>>t;

    int i=0;
    int x;
    int a,b,output[t];






    while(t!=0)
    {

        cin>>a>>b;
        output[i]=fun(a,b);
        i=i+1;
        t=t-1;

    }


        for(int j=0;j<i;j++)
        cout<<output[j]<<endl;




}
