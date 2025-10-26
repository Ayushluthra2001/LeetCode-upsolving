class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            if(nums[i]<0) nums[i]*=-1;
        }
        long long result = 0;
        sort(nums.begin(),nums.end());
        int i =0;
        int j =nums.size()-1;
        int total = nums.size();
        while(i<=j && total>0){
            total-=2;
            int first = nums[i];
            int last = nums[j];
            if(i==j) result+=first*first;
           // cout<<first<<" "<<last<<endl;
            result  = result + last*last - first*first;
            i++,j--;
        }
        return result;
    }
};
