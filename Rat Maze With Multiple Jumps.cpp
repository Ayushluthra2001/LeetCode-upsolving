class Solution {
  public:
  
  bool solve(vector<vector<int>>&ans, vector<vector<int>>&mat
  ,int i , int j , int n , int m,vector<vector<int>>&dp){
      
      if(i>=n || j>=m || i<0 || j<0 || mat[i][j] == 0) return false;
      if(i==n-1 && j == m-1 ) {
          ans[i][j] = 1;
          return true;
      } 
      if(dp[i][j] != -1) return dp[i][j];
      int currJumps = mat[i][j];
      ans[i][j] = 1;
      for(int k =1; k<=currJumps;k++){
           if(solve(ans,mat,i,j+k,n,m,dp)){
              dp[i][j] = true;
               return true;
          }
          if(solve(ans, mat, i+k,j,n,m,dp)) {
              dp[i][j] = true;
              return true;
          }
         
          
      }
      ans[i][j] = 0;
      return dp[i][j] =false;
  }
    vector<vector<int>> shortestDist(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        vector<vector<int>>dp(n, vector<int>(m,-1));
        if(solve(ans,mat,0,0,n,m,dp))
        return ans;
        
        return {{-1}};
        
    }
}; 

