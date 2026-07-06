class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int count = 0;
        int mid = nums.size()/2;
        for(auto i : nums) if(i == nums[mid
        ]) count++;

        return count == 1;
    }
};
