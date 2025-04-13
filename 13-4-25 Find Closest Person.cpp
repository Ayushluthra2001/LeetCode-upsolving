class Solution {
public:
    int findClosest(int x, int y, int z) {
        int first = abs(z-x);
        int second = abs(y-z);
        if(first >  second) return 2;
        else if(first == second) return 0;
        return 1;
    }
};
