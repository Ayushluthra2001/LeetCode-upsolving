class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            char curr=tolower(s[i]);
            char next=tolower(s[i+1]);
            if(curr!=next) count++;
        }
        return count;
    }
};
