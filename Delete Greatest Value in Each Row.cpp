class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int ans=0;
    
        for(int i=grid[i].size()-1;i>=0;i--){
            int maxi=INT_MIN;
            for(int j=0;j<grid.size();j++){
                maxi=max(maxi,grid[j][i]);
            }
            ans+=maxi;
        }
        return ans;
    }
};
