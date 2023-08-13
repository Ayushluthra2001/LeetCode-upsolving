class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int sum=nums[i]+nums[j];
                int max_d1=0,max_d2=0;
                int temp=nums[i];
                while(temp>0){
                    max_d1=max(max_d1,temp%10);
                    temp=temp/10;
                }
                temp=nums[j];
                while(temp>0){
                    max_d2=max(max_d2,temp%10);
                    temp=temp/10;
                }
                if(max_d1==max_d2){
                    maxi=max(maxi,sum);
                }
            }
        }
        if(maxi==INT_MIN) return -1;
        return maxi;
    }
};
