class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
     vector<int>ans;
        
        for(int i=0;i<grid[0].size();i++){
            int maxLen=0;
            for(int j=0;j<grid.size();j++){
                string str= to_string(grid[j][i]);
                int x= str.length();
                maxLen=max(maxLen,x);
            }
            ans.push_back(maxLen);
        }
        return ans;
    }
};
