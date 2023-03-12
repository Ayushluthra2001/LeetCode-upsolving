class Solution {
public:
    int count_v(int i, vector<string>&words){
        
        string temp=words[i];
        bool yes=0;
        
        if(temp[0]=='a' || temp[0]=='e' || temp[0]=='i' || temp[0]=='o' || temp[0]=='u') {
            yes=1;
        } else yes=0;
        
        if(yes==0) return 0;
        
        if(temp[temp.length()-1]=='a' || temp[temp.length()-1]=='e' || temp[temp.length()-1]=='i' || temp[temp.length()-1]=='o' || temp[temp.length()-1]=='u') {
            yes=1;
        } else yes=0;
        if(yes==0) return 0;
        
        
        return yes;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            count+=count_v(i,words);
        }
        return count;
    }
};
