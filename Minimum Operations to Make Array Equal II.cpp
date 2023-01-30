class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long count=0;
        long long pos=0;
        long long neg=0;
        for(int i=0;i<nums1.size();i++){
            
            long long diff=nums1[i]-nums2[i];
            if(diff!=0 && k==0) return -1;
             
            if(k!=0 && diff%k!=0) return -1;
            int a=abs(diff);
            if(nums1[i]<nums2[i]){
                count+=a/k;
                pos+=a/k;
            }else if(nums1[i]>nums2[i]){
                neg+=a/k;
                count+=a/k;
            }
        }
        if(pos!=neg) return -1;
        count=count/2;
        return count;
    }
};
