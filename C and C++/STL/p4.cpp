#include<iostream>
using namespace std;

void asort(int arr[],int n)
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



}


void dsort(int arr[],int n)
{


  int i,j,temp;

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)

            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

}


int main()
{

    int n;
    cout<<"how many no u want to enter on array : "<<" ";
    cin>>n;
    int *arr=new int(n);

    cout<<"Enter elements in the array :"<<endl;

    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"printing the array(Actual Array):"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

        int b[10],c1[10];
        int i;

    cout<<endl;
    int c=0;
    int k=0;
    int j=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           c=c+1;
           b[k]=arr[i];
           k=k+1;


        }
        else{

            c1[j]=arr[i];
            j=j+1;
        }

    }
    cout<<endl;
    cout<<"output"<<endl;
    cout<<"odd no decreasing order .....   even no increasing order"<<endl;
    dsort(c1,j);
    cout<<endl;
     for(i=0;i<j;i++)
         cout<<c1[i]<<" ";

    asort(b,c);
    for(i=0;i<c;i++)
        cout<<b[i]<<" ";


}
