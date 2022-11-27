class Solution {
public:
    int appendCharacters(string s, string t) {
        int index1=0;
        int index2=0;
        int n=t.length()-1;
        int m=s.length()-1;
        int count=0;
        while(index1<=m){
            while(index1<=m && index2<=n && s[index1]==t[index2]) {
                index1++;
                index2++;
                count++;
            }
            index1++;
        }
        return t.length()-count;
    }
};

