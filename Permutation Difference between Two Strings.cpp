class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mapping,mapping2;
        for(int i=0;i<s.length();i++){
           mapping[s[i]]=i;
        }
         for(int i=0;i<t.length();i++){
           mapping2[t[i]]=i;
        }
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=abs(mapping[s[i]]-mapping2[s[i]]);
        }
        return sum;
    }
};
