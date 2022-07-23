#include<iostream>
using namespace std;
int main()
{

    int arr[10];
    cout<<"Enter no of elements"<<endl;
    int n;
    cin>>n;
    cout<<"rotate by"<<endl;
    int d;
    cin>>d;
    // enter elemnents in the array
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int b[10];
    for(i=d ;i<n;i++)
    {

        b[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {

        cout<<b[i];
    }
}
