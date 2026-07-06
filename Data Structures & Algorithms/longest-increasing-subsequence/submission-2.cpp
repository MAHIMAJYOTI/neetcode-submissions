class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        int maxl=1;
        vector<int>dp(n,1);
        if(n==0) return 0;
        if(n==1)return 1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
            dp[i]=max(dp[i],dp[j]+1);
        }
        
        
        maxl=max(dp[i],maxl);
            }}
            return maxl;
        
    }
};
