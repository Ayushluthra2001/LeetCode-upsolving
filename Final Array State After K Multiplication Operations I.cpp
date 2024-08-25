class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
      
        for(int i = 0; i<k; i++){
            int miniElement = INT_MAX;
            int index = -1;
            for(int j =0; j<nums.size();j++){
                if(miniElement > nums[j]) {
                    miniElement  = nums[j];
                    index = j;
                }
                
            }
            nums[index] = nums[index] * multiplier;
            
            
        }
        
        return nums;
    }
};
