#include <bits/stdc++.h>
using namespace std;



void dfs(int s,vector<int> g[],bool *vis){
    
    vis[s]=true;
    
    cout<<s<<" ";
    for(int i=0;i<g[s].size();++i){
        
        if(vis[g[s][i]]==false){
            dfs(g[s][i],g,vis);
            
        }
    }
}
int main() {
    
    
    int t;
    cin>>t;
    while(t--){
        int n,e; //n->vertices   e->edges
        cin>>n>>e;
        
        vector<int> g[n];  // g[vertices]
        bool vis[n];
        
        memset(vis,false,sizeof(vis));
        
        for(int i=0;i<e;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
            
            
        }
        dfs(0,g,vis);
        cout<<"\n";
        
    }
	return 0;
}
