class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>ans(nums.size(), 0);
        for(int i =0; i<nums.size(); i++){
            bool odd = false;
            int count = 0;
            if(nums[i] % 2== 0) odd = false;
            else odd = true;
            for(int j = i+1; j<nums.size(); j++){
                if(odd && nums[j] % 2==0) count++;
                else if(!odd && nums[j] % 2==1) count++;
            }
            ans[i] = count;
        }

        return ans;
    }
};
