class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right(nums.size(),0);
        int sum=0;
        left.push_back(0);
        sum+=nums[0];
        for(int i=1;i<nums.size();i++){
            left.push_back(sum);
            sum+=nums[i];
        }
        sum=0;
        right[nums.size()-1]=0;
        sum+=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            right[i]=sum;
            sum+=nums[i];
        }
        
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};
