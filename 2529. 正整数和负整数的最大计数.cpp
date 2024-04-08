class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countNeg=0,countPos=0;
        for(auto i : nums){
            if(i>0) countPos++;
            else if(i<0) countNeg++;
        }
        return max(countPos,countNeg);
    }
};
