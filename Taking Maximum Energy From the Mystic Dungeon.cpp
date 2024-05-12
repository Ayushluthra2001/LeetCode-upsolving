class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        
        vector<int> dp(energy.size());
        dp = energy;
        for(int i = k; i < energy.size(); i++) {
            dp[i] = max(dp[i], (dp[i] + dp[i - k]));
        }
        int ans = INT_MIN;
        for(int i = energy.size() - k; i < energy.size(); i++) {
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
