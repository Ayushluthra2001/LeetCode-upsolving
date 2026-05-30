class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>largest(nums.size(), INT_MIN);
        vector<int>smallest(nums.size(), INT_MAX);
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
           
            maxi = max(maxi , nums[i]);
            largest[i] = maxi;

        }
        for(int j = nums.size()-1; j>=0; j--){
            mini = min(nums[j] , mini);
            smallest[j] = mini;
        }

        for(int i =0; i<nums.size(); i++){
            cout<<largest[i]<<" "<<smallest[i]<<" "<<endl;
            if(largest[i] - smallest[i]  <= k) return i;
        }

        return -1;
    }
};
