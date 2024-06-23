class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i       = 0;
        double mini = INT_MAX;
        int j       = nums.size()-1;
        while(i <= j){
            
            double avg = ( (double) nums[i] + (double) nums[j] ) / 2;
            i++ , j--;
            mini = min(mini , avg);
        }
        return mini;
    }
};
