#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 10
class sorting
{
    int arr[MAX],n;
    public:
        void getdata();
        void display();
        void bubble_sort();
        void insertion_sort();
        void selection_sort();
        void merge_sort();
        void merge(int,int,int);
        void quick_sort();
        void heap_sort();
        void swap(int *xp, int *yp)
        {
            int temp = *xp;
            *xp = *yp;
            *yp = temp;
        }

};
class searching
{
    int arr[MAX],n;
    public:
        void getdata();
        int linear_search();
        int Binary_search();
        void bubble_sort();


};

void searching :: bubble_sort()
{
    int round,i,t;


        //cout<<"Inside sort";

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
    //for(i=0;i<n;i++)
      //  cout<<arr[i];
      //display();


}
int searching :: Binary_search()
{


    int num,found=0,pos=-1,i,beg=0,e=n-1,mid;
    cout<<"Enter the value u want to search"<<" ";
    cin>>num;
    while(beg<=e)
    {

        mid=(beg+e)/2;
        if(arr[mid]==num)
        {

            cout<<num<<" "<<"is present in the array at position"<<" "<<mid<<endl;
            found=1;

            break;
        }
        else if (arr[mid]>num)
            e=mid-1;
        else
            beg=mid+1;


    }
    if(beg>e && found==0)
        return -1;

}
int searching :: linear_search()
{
    int val,found=0,pos=-1,i;
    cout<<"Enter the value u want to search"<<" ";
    cin>>val;
    for(i=0;i<n;i++)
    {


        if(arr[i]==val)
        {


            found=1;
            pos=i;

            cout<<val<<" "<<"found in the array at position"<<" "<<i<<endl;
            break;
        }

    }
        if(found==0)
            return -1;



}
void searching:: getdata()
{
    cout<<"How many elements you require:"<<" ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void sorting:: getdata()
{
    cout<<"How many elements you require:"<<" ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void sorting ::display()
{

    cout<<"\n-- Display --\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}

void sorting :: bubble_sort()
{
    int round,i,t;


        //cout<<"Inside sort";

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
    //for(i=0;i<n;i++)
      //  cout<<arr[i];
      display();


}

void sorting :: insertion_sort()
{


    /*for(i=0;i<n;i++)
    {
        k=arr[y];


        if(k>arr[i+1])
    {

        t=arr[i];
        arr[i]=k;
        k=t;
    }
    else
        y++;
    }*/

    int i,j,k,y=0,temp,index,extract;
    for(i=1;i<n;i++)
    {

        extract=arr[i];
        index=i;
        for(j=i-1;j>=0;j--)
        {
            if(extract<arr[j])
            {
                arr[index]=arr[j];
                //cout<<arr[i];
                index--;
            }
            else
                break;

        }
        arr[j+1]=extract;


    }

    display();



}
void sorting :: selection_sort()
{


     int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
    display();

}
/*void sorting :: merge(int beg,int mid,int end)
{
    int i=beg,j=mid+1,index=beg,temp[10],k;
    while(i<=mid && j<=end)





}*/
void sorting :: merge_sort()
{


}



int main()
{

    sorting s;
    searching s1;
    int op;



    cout<<"1.searching\t 2.sorting"<<endl;
    cin>>op;
    switch(op)
    {

        case 1:
        {
              cout<<"Enter values"<<endl;
            s1.getdata();
            int option;
            cout<<"Which Searching U want to perform Enter "<<endl;
            cout<<"1.Linear search\t 2.Binary search\t 3.Exit"<<endl;
            cin>>option;
            switch(option)
            {
                case 1:s1.linear_search();
                        break;
                case 2:
                    {
                        s1.bubble_sort();
                        s1.Binary_search();
                        break;
                    }

                default:exit(1);
            }


        }
        break;


        case 2:
        {
            cout<<"Enter values"<<endl;
            s.getdata();
            int option;
             cout<<"Which Sorting U want to perform Enter "<<endl;
            cout<<"1.bubble sort\t 2.insertion sort\t 3.selection sort \t4.Exit"<<endl;
            cin>>option;

            switch(option)
            {
                case 1: s.bubble_sort();
                        break;
                case 2:s.insertion_sort();
                        break;
                case 3:s.selection_sort();
                        break;
                default: exit(1);

            }

        }
         break;
        default: exit(0);


    }


    return 0;


}







