class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int length=0;
        int width=0;
        int area=0;
          
        int n= grid.size();
        int m= grid[0].size();
        int widthMaxIndex=0;
          int widthMiniIndex=m;
          int rowLengthFirst=0;
          int rowLengthLast=0;
          bool gotit=false;
        for(int i=0;i<n;i++){
            bool contain=false;
          
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    contain=true;
                    widthMaxIndex=max(widthMaxIndex,j);
                    widthMiniIndex=min(widthMiniIndex,j);

                    //cout<<widthMaxIndex<<" "<<widthMiniIndex<<endl;
                }
            }
            if(contain) {
                if(rowLengthFirst==0 && !gotit) rowLengthFirst=i,rowLengthLast=i,gotit=true;
                else rowLengthLast=i;
            }
            //cout<<rowLengthFirst<<" "<<rowLengthLast<<endl;
            
            
        }
        area=(abs(rowLengthFirst-rowLengthLast)+1)*(abs(widthMiniIndex-widthMaxIndex)+1);
        return area;
    }
};
