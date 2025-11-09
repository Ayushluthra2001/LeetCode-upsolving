class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int mini = INT_MAX;
        unordered_map<int, vector<int>> mapping;

        
        for (int i = 0; i < nums.size(); i++) {
            mapping[nums[i]].push_back(i);
        }

    
        for (auto p : mapping) {
            vector<int>& temp = p.second;
            int n = temp.size();
            if (n >= 3) {
               
                for (int i = 0; i + 2 < n; i++) {
                    int dist = 2 * (temp[i + 2] - temp[i]);
                    mini = min(mini, dist);
                }
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};
