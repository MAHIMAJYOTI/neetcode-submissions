class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        int maxc=0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int c:st){
            if(st.find(c-1) ==st.end()){
                int curr=c;
                int count=1;
                while(st.find(curr+1)!=st.end()){
                    count++;
                    curr=curr+1;
                }
                maxc=max(count,maxc);

            }
        }
        return maxc;
    }
};
