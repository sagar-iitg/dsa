#include<bits/stdc++.h>
using namespace std;

// directed graph
void addedge(vector<int> adj[],int v1,int v2){
    adj[v1].push_back(v2);


}

void print_list(vector<int> adj[],int v){


    for(int i=0;i<v;i++){

        cout<<i<<"->"<<" ";
        for(auto x:adj[i]){
            cout<<x<<" ";

        }
        cout<<endl;
    }



}



void dfsrec(vector<int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(auto i:adj[s]){
        if(visited[i]==false){
            dfsrec(adj,i,visited); //recursively call node
        }
    }



}

void dfs(vector<int> adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
                 dfsrec(adj,s,visited);

        }
    }


}


int main(){


    int v=4;
    int e=6;

    vector<int> adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,2,0);
    addedge(adj,2,3);
    addedge(adj,3,3);

    cout<<endl<<"Adjacency list"<<endl;
    print_list(adj,v);
    cout<<endl<<"dfs traversal"<<endl;
    dfs(adj,v,1);
    cout<<endl;
    dfs(adj,v,2);
    cout<<endl;

    return 0;
}
