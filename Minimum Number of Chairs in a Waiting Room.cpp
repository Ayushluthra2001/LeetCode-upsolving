class Solution {
public:
    int minimumChairs(string s) {
        int maxcount=0;
        int count=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='E') count++;
                else count--;
                maxcount=max(count,maxcount);
            }
          
        
        return maxcount;
    }
};
