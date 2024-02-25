class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
       unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
       
        for(auto i : mapping){
            if(i.second>2) return false;
        }
        return true;
    }
};
