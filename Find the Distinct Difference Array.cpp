class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int>mapping;
        vector<int>prefix(nums.size(),0);
        vector<int>suffix(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
            suffix[i]=mapping.size();
        }
       
        mapping.clear();
        for(int i=nums.size()-1;i>=0;i--){
           
            prefix[i]=mapping.size();
             mapping[nums[i]]++;
        }
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(suffix[i]-prefix[i]);
        }
        return ans;
    }
};
