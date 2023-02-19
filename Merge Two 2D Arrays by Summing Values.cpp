class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>ans;
        map<int,int>mapping;
        for(auto i : nums1){
            int first=i[0];
            int second=i[1];
            mapping[first]=second;
        }
        for(auto i : nums2){
            int first=i[0];
            int second=i[1];
            mapping[first]=mapping[first]+second;
        }

        for(auto i : mapping){
            ans.push_back({i.first,i.second});
        }
        return ans;
    }
};
