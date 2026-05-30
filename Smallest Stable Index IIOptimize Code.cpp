class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
      
       
        vector<int>smallest(nums.size(), INT_MAX);
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
           
           
            mini = min(nums[nums.size()-i-1] , mini);
            smallest[nums.size()-i-1] = mini;

        }
        

        for(int i =0; i<nums.size(); i++){
                 maxi = max(maxi , nums[i]);
            if(maxi - smallest[i]  <= k) return i;
        }

        return -1;
    }
};
