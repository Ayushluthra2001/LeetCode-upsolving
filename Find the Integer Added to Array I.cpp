class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
       int mini=*min_element(nums1.begin(),nums1.end());
        int mini2=*min_element(nums2.begin(),nums2.end());
        return mini2-mini;
        
    }
};
