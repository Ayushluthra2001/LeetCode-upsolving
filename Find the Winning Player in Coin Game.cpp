class Solution {
public:
    string losingPlayer(int x, int y) {
        int turn = 1;
        

        while(x>=1 && y>=4){
            x-=1;
            y-=4;
           
            turn = !turn ;
        }
        
        return turn == 1 ? "Bob" : "Alice";
    }
};
