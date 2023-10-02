class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    long long result=(long long)(nums[i]-nums[j])*(long long)nums[k];
                    ans=max(ans,result);
                }
            }
        }
        return ans <= 0 ? 0 : ans; 
    }
};
