class Solution {
public:
    int checkForRow(vector<vector<int>>&grid,int n , int m){
        int count=0;
        for(int i=0;i<n;i++){
            int start = 0;
            int end = m-1;
            
            while(start <= end){
                if(grid[i][start] != grid[i][end]){
                    count++;
                    start++;
                    end--;
                }else start++,end--;
            }
        }
        
        return count;
    }
    int checkForCol(vector<vector<int>>&grid,int n , int m){
        
        int count = 0;
        for(int i=0;i<m;i++){
            int start =0;
            int end = n-1 ;
            
            while(start<=end){
                if(grid[start][i] != grid[end][i]){
                    count++;
                    start++;
                    end--;
                }else{
                    start++;
                    end--;
                }
            }
        }
        
        return count;
    }
    int minFlips(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int countCol = checkForCol(grid,n,m);
        int countRow = checkForRow(grid,n,m);
        
        return min(countCol, countRow);
        
        
        
    }
};
