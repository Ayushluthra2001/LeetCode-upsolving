class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count  = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = i; j < s.length(); j++){
                int countOne  = 0;
                int countZero = 0;
                int length  =0;
                for(int k = i; k<=j; k++){
                       if(s[k]=='1') countOne++;
                       else countZero++;
                    length++;
                }
                
                
                if(((countZero <= k) || (countOne <=k))  && length > 0) count++;
                
            }
        }
        
        return count;
    }
};
