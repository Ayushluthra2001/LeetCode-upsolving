class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;

        for(int i = 0; i<nums.size(); i++){
            int x = nums[i];
            while(x > 0){
                if(x % 10 == digit) count++;
                x = x/10;
            }
            
        }
        return count;
    }
};©leetcode
