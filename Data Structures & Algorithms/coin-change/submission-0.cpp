class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,1e9);
        if(n==0) return 0;
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for( auto coin:coins){
            if(i>=coin){
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
        }
        if(dp[amount]==1e9)return -1;
        else 
        return dp[amount];




        
    }
};
