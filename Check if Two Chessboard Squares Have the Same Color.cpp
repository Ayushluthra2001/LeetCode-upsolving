class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int x = coordinate1[0]-'a' + coordinate1[1]-'1' + coordinate2[0]-'a' + coordinate2[1]-'1';
        if(x%2==0) return true;
        return false;
    }
};
