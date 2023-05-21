class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int start=0,end=s.length()-1;
        while(start<=end){
            if(s[start]!=s[end]){
                if(s[start]-'0'>s[end]-'0'){
                    s[start]=s[end];
                }else{
                    s[end]=s[start];
                }
                start++;
                end--;
            }else{
                start++;
                end--;
            }
        }
        return s;
    }
};
