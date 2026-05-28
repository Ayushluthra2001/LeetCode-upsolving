class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==1) return nums;
        ans.push_back(nums[0]);
        for(int i = 1; i<nums.size()-1; i++){

           bool smallest = true;
            for(int j  = i-1; j>=0; j--){
                if(nums[i] <= nums[j]) {
                    smallest = false; 
                    break;
                }
            }
            // largets 

            bool largest = true;
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] <= nums[j]){
                    largest = false;
                    break;
                }
            }
            
            if(largest || smallest ) ans.push_back(nums[i]);
        }
        ans.push_back(nums[nums.size()-1]);
        return ans;
    }
};
