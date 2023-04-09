class Solution {
public:
    bool prime(int n){
        if(n==0 || n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        } 
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int>ans;
        int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            ans.push_back(nums[i][j]);
            i++;
            j++;
        }
        i=0,j=nums.size()-1;
        while(i<nums.size() && j>=0){
            ans.push_back(nums[i][j]);
            i++;
            j--;
        }
        int maxi=0;
        for(auto i : ans){
            if(prime(i)) maxi=max(maxi,i);
        }
        return maxi;
        
    }
};
