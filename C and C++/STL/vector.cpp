#include<iostream>
#include<vector>
using namespace std;



int main()
{

    vector <int> v;
    vector <int> :: iterator it;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";



}
