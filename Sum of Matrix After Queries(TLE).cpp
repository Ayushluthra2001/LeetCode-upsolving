class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        int i=0;
        while(i<queries.size()){
            int type=queries[i][0];
            int index=queries[i][1];
            int val=queries[i][2];
            if(type==0){
                for(int j=0;j<n;j++){
                    mat[index][j]=val;
                }
            }else{
                for(int j=0;j<n;j++){
                    mat[j][index]=val;
                }
            }
            i++;
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
        }
        return sum;
    }
};
