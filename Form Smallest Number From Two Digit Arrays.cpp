class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int mini=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    mini=min(mini,nums2[j]);
                }else{
                    string temp;
                    temp=to_string(nums1[i])+to_string(nums2[j]);
                    sort(temp.begin(),temp.end());
                    int x=stoi(temp);
                    if(mini>x){
                        mini=x;
                    }
                }
            }
        }
        return mini;
    }
};
