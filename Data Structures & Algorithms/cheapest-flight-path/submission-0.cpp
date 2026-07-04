class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        vector<int>dis(n,1e9);
        for(auto it:flights){
            int u=it[0];
            int v=it[1];
            int cost=it[2];
            adj[u].push_back({cost,v});
        }
        queue<pair<int,pair<int,int>>>pq;
        dis[src]=0;
        pq.push({0,{0,src}});
        
        while(!pq.empty()){
            int node=pq.front().second.second;
            int distt=pq.front().second.first;
            int stop=pq.front().first;
            pq.pop();
            if(stop>k) continue;
            for(auto x:adj[node] ){
                int adjnode=x.second;
                int wt=x.first;
                if(distt+wt<dis[adjnode]&&stop<=k){
                    dis[adjnode]=distt+wt;
                    pq.push({stop+1,{dis[adjnode],adjnode}});
                }
            }
        }
        if(dis[dst]==1e9)
        return -1;
        else 
        return dis[dst];

        
        
    }
};
