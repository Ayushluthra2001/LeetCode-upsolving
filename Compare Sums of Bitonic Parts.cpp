class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int maxi  = *max_element(nums.begin(),nums.end());
        long long int sum1 = 0;
       long long int sum2 = 0;
        int i =0;
        for( i =0; i<nums.size() && nums[i]!=maxi; i++) sum1+=nums[i];
        i = i+1;
        for(; i<nums.size() ; i++) sum2+=nums[i];
        sum1+=maxi;
        sum2+=maxi;
        cout<<sum1<<" "<<sum2<<endl;
        if(sum1  > sum2) return false;
        else if(sum2 > sum1) return true;
        return -1;
    }
};
