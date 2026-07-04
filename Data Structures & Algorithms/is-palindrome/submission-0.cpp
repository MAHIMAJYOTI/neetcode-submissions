class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        
        string x="";
        for( char c:s){
            if(isalnum(c)){
               c= tolower(c);
                x+=c;
            }
        }
        int r=x.size()-1;
        while(l<=r){
            if(x[l]!=x[r]){
                return false;
            }
            l++;
            r--;
        }


        return true;
        
    }
};
