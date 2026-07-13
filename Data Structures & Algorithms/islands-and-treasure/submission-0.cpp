class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int INF=2147483647;
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        vector<int>dr={-1,0,1,0};
        vector<int>dc={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
            
                if(nr<n&&nc<m&&nr>=0&&nc>=0&&grid[nr][nc]==INF){
                    grid[nr][nc]=grid[r][c]+1;
                    q.push({nr,nc});
                }
            }
            

        }
        

        
    }
};
