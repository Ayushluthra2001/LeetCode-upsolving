class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mapping;
        for(int i =0; i<nums.size();i++){
            if(nums[i] % k==0)mapping[nums[i]]++;
        }
        int size = mapping.size();

        for(int i=1;i<=size; i++){
           // cout<<"Hello"<<k*i<<endl;
            if(mapping.find(k*i)==mapping.end()) return k*i;
        }
        return (size+1) * k;
    }   
};
