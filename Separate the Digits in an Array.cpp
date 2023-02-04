class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int>temp;
            while(n>0){
                temp.push_back(n%10);
                n=n/10;
            }
            for(int i=temp.size()-1;i>=0;i--){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }
};
