class Solution {
public:
    bool check(char ch){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ) return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans;
        vector<int>temp;
        int count=0;
        for(int i=0;i<words.size();i++){
                string str= words[i];
                
                if(check(words[i][0]) && check(str[str.length()-1])) count++;
            temp.push_back(count);
        }
       
        for(int i=0;i<queries.size();i++){
            
            int x=queries[i][0];
            int y=queries[i][1];
          
           
            int second=temp[y];
           
            int third=x>0 ? temp[x-1] : 0;
            
            ans.push_back(second-third);
        }
        return ans;
    }
};
