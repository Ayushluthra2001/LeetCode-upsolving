class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount=0;
        int index=0;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1) count++;
            }
            if(maxCount<count){
                maxCount=count;
                index=i;
            }
        }
        return {index,maxCount};
    }
};
