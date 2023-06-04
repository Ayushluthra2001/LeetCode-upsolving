class Solution {
public:
    int minimizedStringLength(string s) {
        map<char,int>mapping;
        for(int i=0;i<s.length();i++){
            mapping[s[i]]++;
        }
        return mapping.size();
    }
};
