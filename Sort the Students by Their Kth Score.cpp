class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        unordered_map<int,vector<int>>mapping;
        int n=score.size();
        int m=score[0].size();
        for(int i=0;i<n;i++){
            int el=score[i][k];
            for(int j=0;j<m;j++){
                
                    mapping[el].push_back(score[i][j]);
                
            }
        }
        // for(auto i : mapping){
        //     cout<<i.first<<"->";
        //     for(auto j : i.second){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<int>row;
        for(int i=0;i<n;i++){
            row.push_back(score[i][k]);
        }
        sort(row.begin(),row.end(),greater<int>());
        // for(auto i : row){
        //     cout<<i<<" ";
        // }
        vector<vector<int>>ans;
        int b=0;
        for(int i=0;i<n;i++){
            ans.push_back(mapping[row[b++]]);
        }
        
        // cout<<endl;
        return ans;
        
    }
    
};
