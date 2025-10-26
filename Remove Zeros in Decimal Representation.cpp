class Solution {
public:
    long long removeZeros(long long n) {
        long long result = 0;
        string temp = to_string(n);
        string newString = "";
        for(int i =0; i<temp.length();i++){
            if(temp[i]!='0') newString+=temp[i];
        }
        result = stol(newString);
        return result;
    }
};
