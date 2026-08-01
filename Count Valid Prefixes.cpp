class Solution {
public:
    int countValidPrefixes(string s) {
        int count = 0;
        int countZero = 0, countOne = 0;

        for(int i =0; i<s.length(); i++){
            if(s[i]=='0'){
                countZero++;
            }else countOne++;

            if(countZero == countOne) count++;
            else if(countZero-1 == countOne) count++;
            else if(countOne-1 == countZero) count++;
        }


        return count;
    }
};©leetcode
