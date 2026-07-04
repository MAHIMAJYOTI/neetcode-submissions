class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if(n>m)return false;
        for(int r=0;r<n;r++){
            freq1[s1[r]-'a']++;

        }
        for(int i=0;i<n;i++){
            freq2[s2[i]-'a']++;

        }
        if(freq2==freq1) return true;
        int l=0;
        for(int i=n;i<m;i++){
            freq2[s2[l]-'a']--;
            freq2[s2[i]-'a']++;
            l++;
        
        if(freq1==freq2)return true;
        }
        return false;
        
    }
};
