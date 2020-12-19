#include<bits/stdc++.h>
using namespace std;



// function to add edge into graph

void add_edge(vector<int> adj[],int v1, int v2){
    adj[v1].push_back(v2); // adding edge from v1 to v2;

      adj[v2].push_back(v1);

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
void bfs(vector<int> adj[],int s,bool visited[]){
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


void bfsdis(vector<int> adj[],int v){



    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    int count=0;

    for(int i=0;i<v;i++){

        if(visited[i]==false){
            bfs(adj,i,visited);
            count++;
        }
    }
    cout<<endl;
    cout<<"connected componenet is"<<" ";
    cout<<count<<endl;

}

int main(){

    int v=7; // four vertices
    vector<int> adj[v];

    add_edge(adj,1,0); //directed graph //
    add_edge(adj,1,2);
    add_edge(adj,3,4);
    add_edge(adj,5,6);


    cout<<"print adjacency list"<<endl;
    print(adj,v);
    cout<<"bfs"<<endl;
    bfsdis(adj,v);

}
