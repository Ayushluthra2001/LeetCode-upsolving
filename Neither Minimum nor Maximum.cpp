class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mini && nums[i]<maxi) {
                ans=min(ans,nums[i]);
            }
        }
        return ans==INT_MAX ? -1 :ans;
    }
};
