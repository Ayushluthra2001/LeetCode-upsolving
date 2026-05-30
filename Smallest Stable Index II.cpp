class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        if(nums[nums.size()-1] == 0) {
            if(nums[0] <=k) return 0;
            
            
        return -1;
        }
        vector<int>largest(nums.size(), INT_MIN);
        vector<int>smallest(nums.size(), INT_MAX);
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
           
            maxi = max(maxi , nums[i]);
            largest[i] = maxi;
            mini = min(nums[nums.size()-i-1] , mini);
            smallest[nums.size()-i-1] = mini;

        }
        

        for(int i =0; i<nums.size(); i++){
            cout<<largest[i]<<" "<<smallest[i]<<" "<<endl;
            if(largest[i] - smallest[i]  <= k) return i;
        }

        return -1;
    }
};
