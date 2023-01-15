class Solution {
public:
    void solve(int &digit,int n){
        while(n>0){
            digit+=n%10;
            n=n/10;
        }
    }
    int differenceOfSum(vector<int>& nums) {
        int digit=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            solve(digit,nums[i]);
        }
        return abs(digit-sum);
    }
};
