class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1=0;
        int sum2=0;
        bool check=false;
        
        for(int i=0;i<2 && i<player1.size();i++){
            if(check){
                sum1+=2*player1[i];
            }else {
                if(player1[i]==10) check=true;
                sum1+=player1[i];
            }
        }
        for(int i=2;i<player1.size();i++){
            if(player1[i-1]==10 || player1[i-2]==10){
                sum1+=2*player1[i];
            }else{
                sum1+=player1[i];
            }
        }
        check=false;
        for(int i=0;i<2 && i<player2.size();i++){
            if(check){
                sum2+=2*player2[i];
            }else {
                if(player2[i]==10) check=true;
                sum2+=player2[i];
            }
        }
        for(int i=2;i<player2.size();i++){
            if(player2[i-1]==10 || player2[i-2]==10){
                sum2+=2*player2[i];
            }else{
                sum2+=player2[i];
            }
        }
        
        if(sum1>sum2) return 1;
        else if(sum1<sum2) return 2;
        return 0;
    }
};
