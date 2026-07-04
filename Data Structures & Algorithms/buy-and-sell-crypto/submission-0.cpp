class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pro=0;
        int maxpro=INT_MIN;
        int minprice=prices[0];
        for(int i=0;i<n;i++){
            pro=prices[i]-minprice;
            minprice=min(minprice,prices[i]);
            maxpro=max(maxpro,pro);
        }
        return maxpro;
    }
};
