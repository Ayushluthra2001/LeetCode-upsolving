class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(letter==s[i]) count++;
        }
        if(count==0) return 0;
        double ans=(count*100)/s.length();
        return (int)ans;
    }
};
