class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
         int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));

   
    for (int i = 0; i < n; i++) {
        dp[i][0] = 1;
    }

    int maxLength = 1;
   
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int l = 0; l <= k; l++) {
                if (nums[i] == nums[j]) {
                    dp[i][l] = max(dp[i][l], dp[j][l] + 1);
                } else if (l > 0) {
                    dp[i][l] = max(dp[i][l], dp[j][l - 1] + 1);
                   
                }
            }
        }

        
        for (int l = 0; l <= k; l++) {
            maxLength = max(maxLength, dp[i][l]);
        }
    }
     

    return maxLength;
    }
};
