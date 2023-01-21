class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mapping,mapping2;
        for(auto i : nums1){
            mapping[i]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mapping.find(nums2[i])!=mapping.end()) return nums2[i];
        }
        return -1;
    }
};
