class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string c:strs){
            string s=c;
            sort(c.begin(),c.end());
            mp[c].push_back(s);
        }
        for(auto p:mp){
            ans.push_back(p.second);
        }
        
        

       
return ans;
        }
        
    };

