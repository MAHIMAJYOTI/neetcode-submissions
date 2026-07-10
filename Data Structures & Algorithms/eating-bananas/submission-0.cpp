class Solution {
public:
bool can(vector<int>& piles,int speed, int h ){
    int hours=0;
    for(int x:piles){
        hours+=(x+speed-1)/speed;
    }
    return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(l<=high){
            int mid=(l+high)/2;
            if(can(piles,mid,h)){
                high=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;

        }

        }
        return ans;

        
    }
};
