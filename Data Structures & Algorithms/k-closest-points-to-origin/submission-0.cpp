class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,vector<int>>>pq;
        vector<vector<int>>ans;

        int dis=0;
        for(int i=0;i<n;i++){
            dis=((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
            
            pq.push({dis,{points[i][0],points[i][1]}});
        }
        while(pq.size()>k){
            pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        

      

        
    }
};
