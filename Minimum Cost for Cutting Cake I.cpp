class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
           sort(horizontalCut.begin(), horizontalCut.end(), greater<int>());
           sort(verticalCut.begin(), verticalCut.end(), greater<int>());

        int horizontal = 1, vertical = 1;
        int i = 0, j = 0;
        int ans = 0;

       
        while (i < m - 1 && j < n - 1) {
            if (horizontalCut[i] > verticalCut[j]) {
                ans += horizontalCut[i] * vertical;
                horizontal++;
                i++;
            } else {
                ans += verticalCut[j] * horizontal;
                vertical++;
                j++;
            }
        }
        while (i < m - 1) {
            ans += horizontalCut[i] * vertical;
            i++;
        }

        
        while (j < n - 1) {
            ans += verticalCut[j] * horizontal;
            j++;
        }

        return ans;
    }
    
};
