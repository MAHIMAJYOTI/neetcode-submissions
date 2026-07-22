class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int h=n-1;
        int ans=-1;
        while(low<=h)
        {
            int mid=(h-low)/2+low;
            if(nums[mid]==target)return mid;
            if(nums[low]<=nums[mid]){
                if(nums[mid]>target&&target>=nums[low]){
             
                h=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<target&&target<=nums[h]){
                   
                    low=mid+1;
                }
                else{
                    h=mid-1;

                }
            }
                

            }
        return ans;
    }
};
