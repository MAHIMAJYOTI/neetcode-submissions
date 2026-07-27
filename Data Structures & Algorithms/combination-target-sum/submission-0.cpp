class Solution {
public:
vector<vector<int>>ans;
vector<int>temp;
void solve(int i,int sum, vector<int>& nums,int target){
    if(sum==target){
        ans.push_back(temp);
        return;
    }
    if(i==nums.size()||sum>target){
        return;
    }
    temp.push_back(nums[i]);
    solve(i,sum+nums[i],nums,target);
    temp.pop_back();
    solve(i+1,sum,nums,target);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        solve(0,0,nums,target);
        return ans;
        

    }
};
