#include<bits/stdc++.h>
using namespace std;



// function to add edge into graph

void add_edge(vector<int> adj[],int v1, int v2){
    adj[v1].push_back(v2); // adding edge from v1 to v2;



}

void print(vector<int> adj[],int v){

    for(int i=0;i<v;i++){
        cout<<i<<"->"<<" ";
        for(auto x:adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }



}
void bfs(vector<int> adj[],int v,int s,bool visited[]){
    //In function s is a starting node from where traversal start

    queue<int> q;
    visited[s]=true;
    q.push(s);


    while(q.empty()==false){


            int u=q.front();
            cout<<u<<" ";
            q.pop();

            for(int i:adj[u]){
                if(visited[i]==false){
                        visited[i]=true;
                        q.push(i);

                }


            }

    }


}



int main(){

    int v=4; // four vertices
    vector<int> adj[v];

    add_edge(adj,0,1); //directed graph //
    add_edge(adj,0,2);
    add_edge(adj,1,2);
    add_edge(adj,2, 0);
    add_edge(adj,2, 3);
    add_edge(adj,3, 3);
    cout<<"print adjacency list"<<endl;
    print(adj,v);
    cout<<"bfs"<<endl;

    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;

    }
    bfs(adj,v,2,visited);

}
