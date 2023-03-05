class Solution {
public:
    int passThePillow(int n, int time) {
     int index=1;
        int currD=0;
        while(time--){
            if(currD==1 && index==1) currD=!currD;
            if(index==n) currD=!currD;
            if(currD==0){
                index++;
            }else{
                index--;
            }
        }
        return index;
    }
};
