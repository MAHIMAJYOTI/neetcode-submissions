class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto it:times){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            adj[u].push_back({v,wt});
        }
        vector<int>dis(n+1,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dis[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            int node=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            
            if (d > dis[node]) continue;
            
            for(auto x:adj[node]){
                int weight=x.second;
                int adjnode=x.first;
                if(d + weight < dis[adjnode]){
                    dis[adjnode] = d + weight;
                    pq.push({dis[adjnode],adjnode});
                }
            }
        }
        int max_dist = 0;
        for(int i = 1; i <= n; i++) {
            if(dis[i] == 1e9) return -1;
            max_dist = max(max_dist, dis[i]);
        }
        return max_dist;
    }
};