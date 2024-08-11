class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>>temp(n,vector<int>(n,0));
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++ ){
                temp[i][j] = c++;
            }
        }

        
        int curri =0,currj=0;
        for(int i=0;i<commands.size();i++){
            if(commands[i] == "RIGHT") {
                currj +=1;
            }else if(commands[i] =="UP"){
                curri -=1;
            }else if(commands[i] == "LEFT"){
                currj -=1;
            }else{
                curri +=1;
            }
        }


        return temp[curri][currj];
    }
};
