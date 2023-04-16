class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans=-1;
        int maxCount=0;
        for(int i=0;i<divisors.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0) count++;
            }
            if(count>=maxCount){

                if(count>maxCount) ans=divisors[i];
                else if(ans==-1) ans=divisors[i];
                else{
                    ans=min(ans,divisors[i]);
                }
                maxCount=count;
            }
        }
        return ans;
    }
};
