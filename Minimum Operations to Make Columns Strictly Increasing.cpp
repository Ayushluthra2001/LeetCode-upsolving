class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
         int count = 0;
        for(int i = 0; i<grid[0].size(); i++){
              int curr = grid[0][i];
               
            for(int j =1; j<grid.size();j++){
                if(grid[j][i] <= curr){
                    
                    
                    
                    
                    count += curr -grid[j][i]+1;
                    grid[j][i] = curr+1;
                    curr = grid[j][i];
                }else curr = grid[j][i];
                
                
                
                
            }
        }
       
        return count;
    }
};
