class Solution {
public:
void dfs( int node,vector<vector<int>>& adj,vector<int>& vis){
    vis[node]=1;
    for(int x:adj[node]){
        if(!vis[x]){
            dfs(x,adj,vis);
        }
    }
}
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int> vis(n,0);
        if(n-1!=edges.size()){
            return false;
        }
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0,adj,vis);
        for(int i=0;i<n;i++){
            
                if(vis[i]==0){
                
                 return false;
                }
                
            }
        
        return true;

}
};
