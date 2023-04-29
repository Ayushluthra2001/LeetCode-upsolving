class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int sum=0;
        while(k--){
            sum+=maxi;
            maxi++;
        }
        return sum;
    }
};
