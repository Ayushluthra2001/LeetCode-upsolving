class Solution {
public:
    
    long long solve(vector<int>& energyDrinkA , vector<int>&energyDrinkB , int i ,int n ,int type,vector<vector<long long>>&dp){
        
        if(i >= n ) return 0;
        
        if(dp[i][type] != -1) return dp[i][type];
            if(type == 0){
                long long  same  = energyDrinkA[i] + solve(energyDrinkA, energyDrinkB, i+1,n,0,dp);
                long long different =  solve(energyDrinkA, energyDrinkB, i+1,n,1,dp);
                return dp[i][type]=max(same, different);
            }else{
                 long long  same  = energyDrinkB[i] + solve(energyDrinkA, energyDrinkB, i+1,n,1,dp);
                 long long different = solve(energyDrinkA, energyDrinkB, i+1,n,0,dp);
                return dp[i][type]=max(same, different);    
        }
            
            
        
        
        return -1;
        
    }
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        long long ans = 0;
        int n = energyDrinkA.size();
       
      vector<vector<long long >>dp(n, vector<long long>(2,-1));
        return max(solve(energyDrinkA , energyDrinkB, 0 , n, 0,dp) , solve(energyDrinkA , energyDrinkB, 0 , n , 1,dp));
        
        return ans;
    }
};
