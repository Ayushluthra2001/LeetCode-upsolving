class Solution {
public:
    bool validDigit(int n, int x) {
        bool gotIt = false;
        while(n > 0){
            if(n < 10  && n%10 == x) return false;
            if(n %10 == x) gotIt =  true;
             n = n/10;
        }

        return gotIt;
    }
};
