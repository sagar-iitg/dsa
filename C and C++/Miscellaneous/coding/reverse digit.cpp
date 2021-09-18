#include<iostream>
using namespace std;
void reverse()
{
    int n=0;
    int rem=0,rev=0;
    cin>>n;
    while(n>0)
    {

        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;

}
int main()
{

    int t,n;

    cin>>t;

    while(t)
    {
        reverse();


        t=t-1;
    }

}
