class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i =0; i<s.length()-1; i++){
            int val1 = s[i]-'0';
            int val2 = s[i+1]-'0';
            cout<<val1 <<" "<<val2<<endl;
            if(abs(val1-val2)>2) return false;
        }


        return true;
    }
};
