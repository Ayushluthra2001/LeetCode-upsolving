class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        for(auto i : mapping){
            if(i.second==2) count=count^i.first;
        }
        return count;
    }
};
