class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=num.length()-1;
        while(i>=0){
            if(num[i]=='0') num.pop_back();
            else break;
            i--;
        }
        return num;
    }
};
