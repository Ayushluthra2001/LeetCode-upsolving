class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            int f=-1;
            
            for(int j=0;j<words[i].length();j++){
                if(x==words[i][j]){
                    f=i;        
                    break;
                }
            }
            if(f!=-1){
                ans.push_back(f);
            }
        }
        return ans;
    }
};
