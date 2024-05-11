class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        bool ans=true;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i+1<grid.size() && grid[i][j]!=grid[i+1][j]){
                    ans=false;
                }
                if(j+1<grid[i].size() && grid[i][j]==grid[i][j+1] ){
                    ans=false;
                }
            }
        }
        return ans;
    }
};
