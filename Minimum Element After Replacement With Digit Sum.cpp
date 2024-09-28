class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;

        for(int i = 0;i<nums.size();i++){
            int x = nums[i];

            int sum = 0;
            while(x > 0){
                sum += x %10;
                x =x/10;
            }
            mini = min(mini, sum);
        }
        return mini;
    }
};
