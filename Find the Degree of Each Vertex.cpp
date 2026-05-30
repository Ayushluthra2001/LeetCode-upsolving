class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans(matrix[0].size(),0);

        unordered_map<int,int>mapping;
        for(int i =0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j]==1)mapping[i]++;
            }
        }
        for(auto i : mapping){
            ans[i.first] = i.second;
        }
        return ans ;
    }
};
