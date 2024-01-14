class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=INT_MIN;
        unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        for(auto i : mapping){
            maxi=max(maxi,i.second);
        }
        int count=0;
        for(auto i : mapping){
            if(i.second>=maxi) count+=i.second;
        }
        return count;
    }
};
