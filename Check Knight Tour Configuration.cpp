class Solution {
public:
    bool dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int count, int n, int* row, int* col) {
        visited[x][y] = true;
        if (count == n * n)
            return true;

        for (int i = 0; i < 8; i++) {
            int new_x = x + row[i];
            int new_y = y + col[i];
            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && !visited[new_x][new_y] && grid[new_x][new_y] == count) {
                if (dfs(grid, visited, new_x, new_y, count + 1, n, row, col))
                    return true;
            }
        }
        visited[x][y] = false;
        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
         int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool>(n, false)); 
        int row[] = {2, 1, -1, -2, -2, -1, 1, 2}; 
        int col[] = {1, 2, 2, 1, -1, -2, -2, -1};

     
        if (grid[0][0] != 0 || !dfs(grid, visited, 0, 0, 1, n, row, col))
            return false;

        // check if all cells have been visited exactly once
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j])
                    return false;
            }
        }
        return true;
    }
};
