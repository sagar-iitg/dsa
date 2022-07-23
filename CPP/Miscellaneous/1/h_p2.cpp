#include<iostream>
using namespace std;
int main()
{

    //int arr[]={2,2,0,4,0,8};
    //int arr[]={0,2,2,2,0,6,6,0,0,8};
    int arr[]={0,2,2,2,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]); // size of the array
    int i;
    //cout<<n;
    int c=0;
    int index=0;
    cout<<"printing array element :"<<" ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" "; //printing array element

    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            index=i;

             arr[index+1]=0;
             arr[index]=arr[index]*2;
        }

    }


    cout<<"\n";
    //for(i=0;i<n;i++) //checking array  element is double or not
       // cout<<arr[i]<<" "<<endl;;

        int b[10];
        cout<<"\n";
        int k=0,count=0;
        for(i=0;i<n;i++)
        {

            if(arr[i]!=0)
            {
                b[k]=arr[i];
                count=count+1;
                k=k+1;
            }
            else
                c=c+1;


        }

   // for(i=0;i<count;i++)
     //   cout<<b[i]<<" ";
    //cout<<c;
    //cout<<"\n";
    //cout<<count<<endl;
    for(i=0;i<c;i++)
    {
        b[count]={0};
        count=count+1;
    }


    cout<<"output :"<<" ";
    for(i=0;i<count;i++)
        cout<<b[i]<<" ";



}
