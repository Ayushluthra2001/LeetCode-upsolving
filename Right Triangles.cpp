class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size()-1;i++){
            for(int j=0;j<grid[0].size()-1;j++){
                int count=0;
                int count2=0;
                for(int b=i,c=0;c<2;c++,b++){
                    for(int k=j,d=0;d<2;d++,k++){
                        if(grid[b][k]=='W'){
                            count++;
                        }else count2++;
                    }
                }
                
                if(count2>=3 || count>=3) {
                    // cout<<count2<<" "<<count<<endl;
                    // cout<<i<<" "<<j<<endl;
                    return true;
                }
            }
        }
        return false;
    }
};
