class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        while(nums[0]!=1 || nums[nums.size()-1]!=size){
            if(nums[0]!=1){
                int i=0;
                while(i<nums.size() && nums[i]!=1){
                    i++;
                }
               
                while(i>=0 && i-1>=0 ){
                    swap(nums[i],nums[i-1]);
                    i--;
                    count++;
                }
            }
            if(nums[nums.size()-1]!=size){
                int i=0;
                while(i<nums.size() && nums[i]!=size){
                    i++;
                }
                while(i+1<nums.size()){
                    swap(nums[i],nums[i+1]);
                    i++;
                    count++;
                }
            }
        }
        return count;
    }
};
