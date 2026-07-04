class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<int,int>mp;
        int l=0;
      int  maxl=0;
        
        for(int r=0;r<n;r++){
            while(mp.count(s[r])){
                mp[s[l]]--;

                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            maxl=max(maxl,r-l+1);
            mp[s[r]]++;

        
        }
        return maxl;

        
    }
};
