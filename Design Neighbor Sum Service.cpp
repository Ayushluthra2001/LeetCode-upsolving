class neighborSum {
public:
    vector<vector<int>> grid;
    int n;
    
    neighborSum(vector<vector<int>>& gird) {
        grid = gird;
        n = grid.size();
    }
    
    int adjacentSum(int value) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == value) {
                    int left = (j > 0) ? grid[i][j - 1] : 0;
                    int right = (j < grid[i].size() - 1) ? grid[i][j + 1] : 0;
                    int up = (i > 0) ? grid[i - 1][j] : 0;
                    int bottom = (i < n - 1) ? grid[i + 1][j] : 0;
                    return left + right + up + bottom;
                }
            }
        }
        return -1;
    }
    
    int diagonalSum(int value) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == value) {
                    int sum =0;
                    if(i-1>=0 && j-1>=0) sum+=grid[i-1][j-1];
                    if(i+1<n && j+1<n) sum+=grid[i+1][j+1];
                    if(i+1<n && j-1>=0) sum+=grid[i+1][j-1];
                    if(i-1>=0 && j+1<n) sum+=grid[i-1][j+1];

                    return sum;
                }
            }
        }
        return -1;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
