class Solution {
public:
    // [4,1,4,0,3,5]
    // 0 1 3 4 4 5
    // 2.5
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        set<double>s;
        // for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
        // cout<<endl;
        while(start<=end){
            
            double  avg=(nums[start]+nums[end]);
            
            // cout<<nums[start]<<" "<<nums[end]<<" "<<avg<<endl;
            start++,end--;
            s.insert(avg/2);
            // cout<<avg/2<<" "<<endl;
        }
        // cout<<s.size()<<endl;
        return s.size();
    }
};
// [4,1,4,0,3,5,7,8]
//  0 1 3 4 4 5 7 8
//     7 7  
// 4.5
// 5.5
// 6.5
// 7.5
// 7
     

 
