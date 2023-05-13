class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int score=0;
        
        
        for(int i=0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int i=0;i<nums[0].size();i++){
            int maxi=0;
            for(int j=0;j<nums.size();j++){
                
                maxi=max(maxi,nums[j][i]);
            }
            
            score+=maxi;
        }
        return score;
    }
};
