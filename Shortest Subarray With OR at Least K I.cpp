class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int b) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int orr=nums[i];
                for(int k=i+1;k<=j;k++){
                    orr=orr|nums[k];
                }
                
                //cout<<xorr<<endl;
                if(orr>=b){
                    mini=min(mini,j-i+1);
                }
            }
        }
        return mini==INT_MAX ? -1:mini;
    }
};
