class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long xorr=0;
        unordered_map<int,int>mapping;
        mapping[xorr]++;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
            count+=mapping[xorr];
            mapping[xorr]++;
        }
        
        
        return count ;
    }
};
