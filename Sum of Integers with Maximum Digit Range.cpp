class Solution {
public:
    int  findRange(int num){
        int maxi = 0;
        int mini = num;
        while(num > 0){
            maxi = max(maxi , num%10);
            mini = min(mini , num%10);
            num = num/10;
        }

        return maxi - mini;
    }
    unordered_map<int,int>mapping;
    int maxDigitRange(vector<int>& nums) {
        int maxi = 0;

        for(int i = 0; i<nums.size(); i++){
            int x  = findRange(nums[i]);
            mapping[x] += nums[i];
            maxi = max(maxi , x);
        }
        return mapping[maxi];
    }
};
