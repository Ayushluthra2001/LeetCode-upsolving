class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int,vector<int>>mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]].push_back(i);
        }
        vector<long long >ans;
        for(int i=0;i<nums.size();i++){
            if(mapping[nums[i]].size()==1) {
                ans.push_back(0);
            }else{
                long long  x=0;
                for(auto j : mapping[nums[i]]){
                    if(i!=j){
                        x+=abs(i-j);
                    }
                }
                ans.push_back(x);
            }
        }
        return ans;
    }
};
// [1,3,1,1,2]

// 1 - > 0 , 2 ,3
// 3 - > 1
// 2 - > 4
