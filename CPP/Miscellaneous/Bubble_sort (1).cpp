#include<iostream>
using namespace std;
class sorting
{
int arr[10],n;
public:

    sorting()
    {
n=5;
    }

    void bubble_sort(int);

};


void sorting :: bubble_sort(int s)
{
    int round,i,n=s,t;




    for(round=0;round<n;round++)
    {

        for(i=0;i<n-1-round;i++)
        {

            if(arr[i]>arr[i+1])
            {
                t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;

            }

    }
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";


}

int main()
{
    sorting s;

        int i;

    s.bubble_sort(n);
    return 0;

}
