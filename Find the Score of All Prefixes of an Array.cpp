class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>prefix;
        // vector<long long>maxi;
        long long maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi) maxi=nums[i];
            nums[i]=nums[i]+maxi;
        }
         
        cout<<endl;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix.push_back(sum);
        }
        return prefix;
    }
    
};
