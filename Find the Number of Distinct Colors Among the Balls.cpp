class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
                unordered_map<int,int>mapping1,mapping2;
vector<int>ans;
for(auto i : queries){
    int x=i[0];
    int y=i[1];
    if(mapping1.find(x)!=mapping1.end()){
        int q=mapping1[x];
        mapping2[q]--;
        if(mapping2[q]==0){
            mapping2.erase(q);
        }
    }
    mapping1[x]=y;
    mapping2[y]++;
    ans.push_back(min(mapping1.size(),mapping2.size()));
}
    
return ans;
    }
};
