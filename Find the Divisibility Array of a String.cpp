class Solution {
public:
   vector<int> divisibilityArray(string word, int m) {
    
    vector<int> ans;
    long long prefix = 0;
    for(int i = 0; i < word.length(); i++) {
        prefix = (prefix * 10 + (word[i] - '0'));
        prefix=prefix % m;
        if(prefix == 0) {
            ans.push_back(1);
        }else{
            ans.push_back(0);
            }
        }
        return ans;
    }
};
