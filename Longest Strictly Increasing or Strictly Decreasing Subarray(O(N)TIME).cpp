class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi=1;
        int currMaxi=1;
        int currMaxi2=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i]>nums[i-1]) {
                currMaxi++;
                maxi=max(currMaxi,maxi);
            }else{
                currMaxi=1;
            }
            if(nums[i]<nums[i-1]){
                currMaxi2++;
                maxi=max(maxi,currMaxi2);
            }else{
                currMaxi2=1;
            }
            i++;
        }
        return maxi;
    }
};
