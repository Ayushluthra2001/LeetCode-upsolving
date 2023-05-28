class Solution {
public:
    void topLeft(vector<vector<int>>&grid,int i, int j, unordered_set<int>&s1){
        if(i<0 || j<0) return ;
        s1.insert(grid[i][j]);
        topLeft(grid,i-1,j-1,s1);
        
    }
    
    void bottomRight(vector<vector<int>>&grid,int i, int j, unordered_set<int>&s2){
        if(i>=grid.size() || j>=grid[0].size()) return ;
        s2.insert(grid[i][j]);
        bottomRight(grid,i+1,j+1,s2);
        
    }
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        unordered_set<int>s1,s2;
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                topLeft(grid,i-1,j-1,s1);
                bottomRight(grid,i+1,j+1,s2);
                // cout<<s1.size()<<" "<<s2.size()<<endl;
                int x=s1.size()-s2.size();
                x=abs(x);
                
                ans[i][j]=x;
                s1.clear();
                s2.clear();
            }
        }
        return ans;
    }
};
