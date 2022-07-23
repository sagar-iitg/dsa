#include<iostream>
#include<stack>
#include<vector>

using namespace std;



int NGL(int arr[],int n)
{


    stack <int> s;
    vector <int> v;


    for(int i=0;i<n;i++)
    {

        if(s.size()==0)
            v.push_back(-1);

        else if(s.size() >0 && s.top() > arr[i])
            v.push_back(s.top());

        else if(s.size() >0 && s.top() <= arr[i])
        {


            while( (s.size() >0 && s.top() <= arr[i] ))
                  {

                      s.pop();
                  }
                if(s.size()==0)
                    v.push_back(-1);
                else
                    v.push_back(s.top());

        }

        s.push(arr[i]);
    }


     //for (auto it = v.begin(); it != v.end(); it++)
       // cout << *it << " ";
        //
        cout<<endl;
        return v;




}
int main()
{



    int arr[]= {1,3,2,4};


    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
   v= NGL(arr,n);


        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    return 0;



}
