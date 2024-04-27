class Solution { 
public: 
    long long numberOfRightTriangles(vector<vector<int>>& grid) { 
        int m = grid.size(); 
        int n = grid[0].size(); 
        long long res = 0; 
        unordered_map<int,int>mapping1,mapping2;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) count++;
                
            }
            mapping1[i]=count;
        }
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(grid[j][i]==1) count++;
                
            }
            mapping2[i]=count;
        }
        // for(auto i :mapping1){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;
        // for(auto j : mapping2){
        //     cout<<j.first<<" "<<j.second<<endl;
        // }
        // cout<<endl;
        for (int i = 0; i < m; ++i) { 
            for (int j = 0; j < n; ++j) { 
                  int rowSum = 0; 
                  int colSum = 0; 
                if (grid[i][j] == 1) { 
                  
 
                    // for (int k = 0; k < n; ++k) { 
                    //     if (grid[i][k] == 1) { 
                    //         rowSum++; 
                    //     } 
                    // } 
 
//                     for (int k = 0; k < m; ++k) { 
//                         if (grid[k][j] == 1) { 
//                             colSum++; 
//                         } 
//                     } 
                    rowSum=mapping1[i];
                    colSum=mapping2[j];
 
                    res += (rowSum - 1) * (colSum - 1); 
                } 
            } 
        } 
 
        return res; 
    } 
}; 
