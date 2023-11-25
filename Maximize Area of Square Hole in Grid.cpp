class Solution {
private:
    int solve(int ind, int n, vector<int> &prices, int offer, vector<vector<int>> &dp)
    {
        if(ind == n)
            return 0;
        if(ind > n)
            return 1e8;
    
        if(dp[ind][offer] != -1)
            return dp[ind][offer];
        
        //if offer is availabe
        if(offer)
        {
            return dp[ind][offer] = min(prices[ind]+solve(ind+1, n, prices, ind+1, dp), solve(ind+1, n, prices, offer-1, dp));
        }
        
        return dp[ind][offer] = prices[ind] + solve(ind+1, n, prices, ind+1, dp);
    }
public:
    int minimumCoins(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        
        return solve(0, n, prices, 0, dp);
    }
};
