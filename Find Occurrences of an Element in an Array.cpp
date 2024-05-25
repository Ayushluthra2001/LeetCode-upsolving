class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int>mapping;
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) {
                mapping[count++]=i;
            }
        }
        
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(mapping.find(queries[i])!=mapping.end()){
                ans.push_back(mapping[queries[i]]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
