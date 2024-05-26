class Solution {
public:
    string compressedString(string word) {
        
        string ans="";
        int i=0;
        int j=0;
        while(i<word.length()){
            int j=i;
            int count=0;
            while(j<word.length() && word[i]==word[j]){
                j++,count++;
            }
            
        
            
            if(count>9){
                while(count>9){
                    ans+=to_string(9);
                    ans+=word[i];
                    count-=9;
                }
                if(count>0){
                   ans+=to_string(count);
                    ans+=word[i];
                    count=0;
                }
            }else if(count>0){
                ans+=to_string(count);
                ans+=word[i];
                count=0;
            }
            i=j;
        }
        return ans;
    }
};
