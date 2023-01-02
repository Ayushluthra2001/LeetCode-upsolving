class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        bool find = false;
        vector<string>newWords;
        for(auto i : words){
            if(i==target){
                find=true;
                break;
            }
            
        }
        if(!find) return -1;
        for(auto i : words){
            newWords.push_back(i);
            
        }
        for(auto i : words){
            newWords.push_back(i);
            
        }
        for(auto i : words){
            newWords.push_back(i);
            
        }
        int n=words.size();
        startIndex+=n;
        int prev_count=0;
        int next_count=0;
        for(int i=startIndex;i<newWords.size();i++){
            if(newWords[i]!=target) next_count++;
            else break;
        }
        for(int i=startIndex;i>=0;i--){
            if(newWords[i]!=target) prev_count++;
            else break;
        }
        
        return min(prev_count,next_count);
    }
};
