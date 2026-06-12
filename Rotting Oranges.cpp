class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n = grid.size();
        int m = grid[0].size();


        // finding rotten oranges in grid
        int fresh = 0;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j] == 1) fresh++;
        if(grid[i][j] == 2) q.push({i,j});
    }
}

if(fresh == 0) return 0;

        //if(q.size()==0) return -1;
        //if(q.size() == n*m) return 0;
        

        // rotten orange going to rooten his naighbour bachooo
        int ans = 0;
        vector<vector<int>>visited(n,vector<int>(m,-1));
        while(!q.empty()){
            int size = q.size();
            bool pushed = false;
            for(int k =0; k<size; k++){
                pair<int,int>curr = q.front();
                q.pop();
                 
                int i = curr.first;
                int j = curr.second;
                visited[i][j] = 1;
                


                // up
                if(i-1>=0 && i-1<n && j>=0 && j<m && visited[i-1][j] != 1  && grid[i-1][j] ==1 ){
                    q.push({i-1,j});
                    visited[i-1][j] =1;
                    pushed = true;
                    grid[i-1][j] = 2;
                }
                
                
                // down
                if(i+1>=0 && i+1 <n && j < m && j>=0 && visited[i+1][j]!=1 && grid[i+1][j] ==1){
                    q.push({i+1,j});
                    visited[i+1][j]=1;
                    pushed = true;
                    grid[i+1][j] = 2;
                } 
                


                // left 
                if(i>=0 && j-1>=0 && i<n && j-1<m && visited[i][j-1] !=1 && grid[i][j-1] ==1){
                    q.push({i,j-1});
                    pushed = true;
                    visited[i][j-1] = 1;
                    grid[i][j-1] = 2;
                }
                
                // right

                if(i<n && i>=0 && j+1<m && j+1>=0 && visited[i][j+1] !=1 && grid[i][j+1] ==1){
                    q.push({i,j+1});
                    pushed = true;
                    visited[i][j+1] = 1;
                    grid[i][j+1] = 2;
                } 
                
            }
            if(pushed) ans++;
        }
        for(int i =0; i<n; i++){
    for(int j =0; j<m; j++){
        if(grid[i][j] == 1)
            return -1;
    }
}

return ans;
    }
};
