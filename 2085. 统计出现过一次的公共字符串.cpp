class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mapping1,mapping2;
        for(auto i :words1){
            mapping1[i]++;
        }
        for(auto i:words2){
            mapping2[i]++;
        }
        int count=0;
        
        for(auto i : mapping2){
            if(mapping1.find(i.first)!=mapping1.end() && (mapping2[i.first]==1 && mapping1[i.first]==1)) count++;
        }
        return count;
    }
};
