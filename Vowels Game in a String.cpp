
class Solution {
public:
    bool check(char ch){
        if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u') return true;
        return false;
    }
    bool doesAliceWin(string s) {
        
        for(int i=0;i<s.length();i++){
            if(check(s[i]))  return true;
            
        }
        return false;
    }
};
