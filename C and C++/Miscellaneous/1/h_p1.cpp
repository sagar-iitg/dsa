#include<iostream>
using namespace std;
int main()
{

    //int arr[10];
    int i;
    cout<<"Size of the array "<<endl;
    int n;
    cin>>n;
    int *arr=new int(n);
    cout<<"rotate by"<<endl;
    int d;
    cin>>d;
    // enter elemnents in the array
    cout<<"Enter Elements in the array"<<endl;

    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int b[10];
    int j=0;
    for(i=d ;i<n;i++)
    {

        b[j]=arr[i];
        j=j+1;
    }

    /*for(i=0;i<n-d;i++)
    {

        cout<<b[i]<<" ";
    }*/

    int x=0;
    for(i=n-d;i<n;i++)
    {
        //j=d;
        b[i]=arr[x];
        x=x+1;

    }

   cout<<"output"<<endl;

    for(i=0;i<n;i++)
    {

        cout<<b[i]<<" ";
    }





}
