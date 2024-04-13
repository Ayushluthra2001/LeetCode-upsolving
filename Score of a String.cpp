class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=1;i<s.length();i++){
           
           int a=s[i]-'a';
            int b=s[i-1]-'a';
            score+=abs(a-b);
        }
        return score;
    }
};
