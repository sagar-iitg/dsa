/*Given an array of numbers, arrange them in a way that yields the largest value.
For example, if the given numbers are {54, 546, 548, 60},
the arrangement 6054854654 gives the largest value.
 And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4},
 then the arrangement 998764543431 gives the largest value.*/


#include<iostream>
using namespace std;
int main()
{
     int i=0,num;
     int arr[]={54,546,548,60};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"print array"<<" "<<endl;
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

     cout<<endl;

    /* for(i=0;i<n;i++)
     {
         if(arr[i]>arr[i+1])
            {
                num=arr[i];
            }

         int num=arr[i];
         //num=num%10;
         //cout<<num<<" ";

     }*/
    int max;
    max=arr[0];
    for(i=1;i<n;i++)    // finding largest element in the array
    {

      if(arr[i]>max)
            max=arr[i];



    }
     cout<<max;




 }
