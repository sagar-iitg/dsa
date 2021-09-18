#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    unordered_map <int,int> m;

    for(int i=0;i<n;i++)
    {

        m[arr[i]++];

    }
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<" ";
        cout<<endl;

    return 0;
}
