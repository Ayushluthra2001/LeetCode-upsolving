class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r=0,l=0,s=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='R') r++;
            else if(moves[i]=='L')l++;
            else s++;
        }
        int dis=0;
        if(r>=l){
            r+=s;
            dis=r-l;
        }else{
            l+=s;
            dis=l-r;
        }
        return dis;
    }
};
