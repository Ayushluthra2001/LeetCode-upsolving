class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,int>mapping;
        map<vector<int>,string>mapping2;
        for(auto i : words){
            int prev=-1;
            vector<int>ans;
            for(auto j :i){
                if(prev==-1){
                    prev=j-'0';
                }else{  
                    ans.push_back(prev-(j-'0'));
                    prev=j-'0';
                }
            }
            mapping[ans]++;
            mapping2[ans]=i;
        }
        for(auto i : mapping){
            if(i.second==1) return mapping2[i.first];
        }
        return "";
    }
};
