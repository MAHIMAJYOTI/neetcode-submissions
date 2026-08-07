class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int>mp;
        int ml=0;
        int l=0;
        int maxs=0;
      
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            maxs=max(maxs,mp[s[i]]);
            while((i-l+1)-maxs>k){
                mp[s[l]]--;
                l++;
            }
            ml=max(ml,i-l+1);

        }
        return ml;

    

        
    }
};
