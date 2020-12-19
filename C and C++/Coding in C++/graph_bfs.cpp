#include<bits/stdc++.h>
using namespace std;




void addEdge(vector<int> adj[],int u,int v){


    adj[u].push_back(v);  // adding edge from u to v
    adj[v].push_back(u);  // adding edge from v to u




}
void printlevel(vector<int> adj[],int v){

    //cout<<"vertices no"<<" u"<<"v"<<endl;

    for(int i=0;i<v;i++){
            cout<<i<<"-> ";
        for(auto x:adj[i]){
                cout<<x<<" ";

        }
        cout<<"\n";
    }

}


void bfs(vector<int> adj[],int v,int s){

        //v no of vertices
        // s starting vertices

        bool visited[v];
        for(int i=0;i<v;i++){
            visited[i]=false;

        }

        queue<int> q;  // create queue
        visited[s]=true; // mark source as visited

        q.push(s);  //push element source to queue

        while(q.size()!=0){

            int u=q.front();
            cout<<u<<" ";

            q.pop();




            for(auto v:adj[u]){
                    if(visited[v]==false){
                        visited[v]=true;
                        q.push(v);

                    }


            }
        }

}

int main(){

    int v=4; //size of vertices

    vector<int> adj[4];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    printlevel(adj,v);
    cout<<endl;
    bfs(adj,v,0);
    cout<<endl;
    bfs(adj,v,1);




}
