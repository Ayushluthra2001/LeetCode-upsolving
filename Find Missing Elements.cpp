class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi =0;
        int mini = nums[0];
        for(int i = 0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini , nums[i]);
        }
        vector<int>ans(maxi+1, 0);
        
        for(int i =0; i<nums.size(); i++){
            
            
             ans[nums[i]] = 1;
        }
        vector<int>result;
        for(int i = mini; i<ans.size(); i++){
            if(ans[i]==0) result.push_back(i);
        }
        //cout<<nums.size()<<" "<<ans.size()<<endl;
        return result;
    }
};

