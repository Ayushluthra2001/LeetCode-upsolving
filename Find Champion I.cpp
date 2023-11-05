class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int winner=0;
        int Mcount=0;
        for(int i=0;i<grid.size();i++){
            int count=0;
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==1) count++;
            }
            if(count>Mcount){
                Mcount=count;
                winner=i;
            }
        }
        return winner;
    }
};
