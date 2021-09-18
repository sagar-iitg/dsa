#include<iostream>
using namespace std;

void NGE(int arr[],int n)
{

    int output,i,j;
    for(i=0;i<n;i++)
    {
        output=-1;

        for(j=i+1;j<n;j++)
        {
             if(arr[i]<arr[j])
            {

                output=arr[j];
                break;

            }

        }
        cout<<arr[i]<<"  "<<output<<endl;


    }
}

int main()
{

    int arr[]={11,13,21,3};

    int n=sizeof(arr)/sizeof(arr[0]);
    NGE(arr,n);
    return 0;


}
