#include<bits/stdc++.h>
using namespace std;

void createAdjList(vector<pair<int,int>> adj[],int a,int b,int w)
{
    adj[a].push_back(make_pair(b,w));
    adj[b].push_back(make_pair(a,w));
}

int ShortestPath(vector<pair<int,int>>adj[],int v,int source,int destination,int open[])
{
    if(open[source]!=1)
    {
        return INT_MAX;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push(make_pair(0,source));
    int path[v]={0};
    for(int i=0;i<v;i++)
    {
        path[i] = INT_MAX;
    }
    path[source]=0;
    while(pq.empty()!=1)
    {
        int curr_n = (pq.top()).second;
        int curr_w = (pq.top()).first;
        pq.pop();
        for(auto itr=adj[curr_n].begin();itr!=adj[curr_n].end();itr++)
        {
            if(open[itr->first]==1)
            {
                if(path[itr->first]>path[curr_n]+itr->second)
                {
                    path[itr->first]=path[curr_n]+itr->second;
                    pq.push(make_pair(path[itr->first],itr->first));
                }
            }
        }
    }
    return path[destination];
}

int main()
{
    int N,M,D;
    cin>>N>>M>>D;
    vector<pair<int,int>> adj[N];
    for(int i=0;i<M;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        createAdjList(adj,a-1,b-1,w);
    }
    int open[N]={0};
    int t;
    for(int i=0;i<D;i++)
    {
        cin>>t;
        if(t==1)
        {
            int city;
            cin>>city;
            open[city-1]=1;
        }
        else if(t==2)
        {
            int X,Y;
            cin>>X>>Y;
            int S_path = ShortestPath(adj,N,X-1,Y-1,open);
            if(S_path!=INT_MAX)
            {
                cout<<S_path<<endl;
            }
            else
            {
                cout<<"-1"<<endl;;
            }
        }
    }
    return 0;
}
