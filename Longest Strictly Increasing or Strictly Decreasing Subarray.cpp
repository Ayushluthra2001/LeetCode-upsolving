class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi=0;

        for(int i=0;i<nums.size();i++){
            int currMaxi=1;
            maxi=max(currMaxi,maxi);
            for(int j=i+1;j<nums.size();j++){
                if(nums[j-1]<nums[j]) {
                    currMaxi++;
                    maxi=max(currMaxi,maxi);
                }else break;
            }
            currMaxi=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j-1]>nums[j]){
                    currMaxi++;
                    maxi=max(currMaxi,maxi);
                }else break;
            }
        }
        return maxi;
    }
};
