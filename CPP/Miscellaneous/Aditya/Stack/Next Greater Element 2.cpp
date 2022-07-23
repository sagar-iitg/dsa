#include<iostream>
#include<stack>
#include<vector>
using namespace std;



void NGE(int arr[],int n)
{
    vector <int> v;
    stack <int> s;



    for(int i=n-1; i>=0;i--)
    {
        //cout<<s.size()<<endl;


        if(s.size()== 0)
            v.push_back(-1);
        else if(s.size()>0 && s.top()>arr[i])
            v.push_back(s.top());
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<= arr[i])
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

    vector<int>::iterator it;

    for (it = v.end() - 1; it >= v.begin(); it--)
        cout <<*it << " ";
    cout << endl;


}


int main()
{


    int arr[]={1,3,0,0,1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    NGE(arr,n);
    return 0;

}
