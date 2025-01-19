class Solution {
public:
    int subarraySum(vector<int>& nums) {
        
        int sum = 0;
        for(int i = 0 ; i<nums.size(); i++){
            int start = max(0 , i- nums[i]);
            int currSum = 0;
            for(int j = start; j<=i; j++){
                currSum += nums[j];
            }
            sum += currSum;
        }
        
        return sum;
    }
};
