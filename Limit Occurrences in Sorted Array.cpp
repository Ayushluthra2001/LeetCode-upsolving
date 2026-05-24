class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        int i = 0;
        int j = 0;
        while(i < nums.size()){
            j = i; 
            int l = 0;
            int currVal = nums[j];
            while(j < nums.size() && l < k && currVal == nums[j] ){
                ans.push_back(nums[j++]);
                l++;
            }
            while( j < nums.size() && currVal == nums[j]) j++;
             i = j;
            
        }
        return ans;
    }
};
