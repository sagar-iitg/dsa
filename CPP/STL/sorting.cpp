#include<iostream>
using namespace std;

void sort(int[],int);


int main()
{

    int arr[]={2,4,5,1,6,77,90,46,34};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    sort(arr,n);


}





void sort(int arr[],int n)
{


  int i,j,temp;

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)

            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }



            for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


