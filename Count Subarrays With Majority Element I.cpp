class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
      int ans = 0;
      for(int i = 0; i<nums.size(); i++){
        int count = 0;
        for(int j =i; j<nums.size();j++){
            if(nums[j]== target) count++;
            int size = j-i+1;
            if(count> (size/2)) ans++;
        }
      }
    
        return ans;
    }
};


