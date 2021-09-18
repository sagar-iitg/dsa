#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[11]={3,1,2,4,6,0,9,77,10,11,13};
    for(i=0;i<10;i++)
    {

            cout<<arr[i]<<" ";
    }
    int temp,n;
    for(i=0;i<11;i++)
    {

        for(j=0;j<11;j++)
        {

            if(arr[i]>arr[j])
            {

                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }


        }
    }
    for(i=0;i<10;i++)
        cout<<endl<<arr[i]<<" ";



}
