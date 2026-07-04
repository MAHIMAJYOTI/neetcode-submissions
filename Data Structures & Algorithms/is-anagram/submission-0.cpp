class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>f1;
        unordered_map<int,int>f2;
        for(char c:s){
            f1[c]++;

        }
        for(char x:t){
            f2[x]++;
        }
        if(f1==f2){
            return true;
        }
        return false;




          
    }
};
