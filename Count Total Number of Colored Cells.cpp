class Solution {
public:
    long long coloredCells(int n) {
        long long t=n;
        return t*t+(t-1)*(t-1);
        
    }
};
