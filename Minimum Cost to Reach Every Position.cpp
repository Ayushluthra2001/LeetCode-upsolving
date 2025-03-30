class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>ans(cost.size(),0);
        
       int mini = INT_MAX;
        for(int i = 0; i<cost.size(); i++){
            mini = min(mini , cost[i]);
            ans[i] = mini;
        }
        
        return ans;
    }
};
