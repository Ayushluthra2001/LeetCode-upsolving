class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans = nums;
        for(int i = nums.size()-1; i>=0; i--){
            ans.push_back(nums[i]);
        }

        return ans;
    }
};
