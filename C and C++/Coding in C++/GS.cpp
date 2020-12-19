#include <bits/stdc++.h>

using namespace std;

int fun(vector<int> arr,int curr, int prev,int visited[])
{
    if(arr[curr]==0)
    {
        return 1;
    }
    if(curr<0 || curr>=arr.size() || visited[curr]==1)
    {
        return 0;
    }
    int l=-1,r=-1;
    visited[curr]++;

    l = curr-arr[curr];
    r = curr+arr[curr];
    if(l>=0 && l<arr.size())
    {
        if(fun(arr,l,curr,visited))
        {
            return 1;
        }
    }
    if(r>=0 && r<arr.size())
    {
        if(fun(arr,r,curr,visited))
        {
            return 1;
        }
    }
    return 0;
}




int possiblerotation(int n, vector<int> arr, int s)// n is the number of houses, arr contains the house number markings,
//s is the house number from which Harry starts the hunt.
{

    // WRITE YOUR CODE HERE

    // return 1 if hunt is possible and 0 if not possible



    int visited[n]={0};

    int curr=s;
    int prev=-1;


    return fun(arr,curr,prev,visited);


}

void printPossiblerotation(int n, vector<int> arr, int s)
{
    if(possiblerotation(n,arr,s)==1)
    {
        cout<<"Yes\n";
    }
    else if(possiblerotation(n,arr,s)==0)
    {
        cout<<"No\n";
    }
}

int main()
{
    int len, temp, s, nTest;
    cin>>nTest;
    for(int j=0;j<nTest;++j)
    {
        cin>>len;
        vector<int> arr;
        for(int i=0; i<len;++i)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        cin>>s;
        printPossiblerotation(len,arr,s);
    }
    return 0;
}
