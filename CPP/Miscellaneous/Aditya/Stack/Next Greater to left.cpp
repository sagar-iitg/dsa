#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void NGE(int arr[],int n)
{


    vector <int> v;
    stack <int> s;

    for(int i=0;i<n;i++)
    {

        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if (s.size()>0 && s.top() > arr[i] )
        {

            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top ()<=arr[i])
        {

            while(s.size ()>0 && s.top()<=arr[i])
            {
                 s.pop();

            }
              if(s.size()==0)
                    v.push_back(-1);
                else
                {
                   v.push_back(s.top());
                }
        }


        s.push(arr[i]);
    }


    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;


    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;


}
int main()
{

    int arr[]={1,20,34,5,4};

    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n;


    NGE(arr,n);
    return (0);
}

