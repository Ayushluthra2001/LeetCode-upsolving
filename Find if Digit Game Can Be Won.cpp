class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigit = 0;
        int doubleDigit =0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<=9) singleDigit+=nums[i];
            else doubleDigit+=nums[i];
        }
        if(singleDigit != doubleDigit) return true;
        
        return false;
        
    }
};
