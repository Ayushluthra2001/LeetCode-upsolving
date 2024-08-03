class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        unordered_map<int,unordered_map<int,int>>mapping;
        
        for(int i=0;i<pick.size();i++){
            int player = pick[i][0];
            int ball = pick[i][1];
            
            mapping[player][ball]++;
        }
        
        int count = 0;
        
        for(auto i : mapping){
            int maxi =0;
            int player  = i.first;
            
            for(auto j : i.second) {
                maxi = max(maxi,j.second);
            }
            if(player< maxi) count++;
        }
        
        return count;
    }
};
