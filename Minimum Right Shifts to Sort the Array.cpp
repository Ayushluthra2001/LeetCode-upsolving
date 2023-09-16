class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        vector<int>temp=nums;
        bool check=true;
        sort(nums.begin(),nums.end());
        int size=temp.size();
        int count=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=nums[i]) {
                check=false;
                break;
            }
        }
        if(check) return 0;
       
        while(size>0){
            check=true;
            int k=temp[temp.size()-1];
            for(int i=temp.size()-2;i>=0;i--){
                temp[i+1]=temp[i];
            }
            temp[0]=k;
            
            for(int i=0;i<temp.size();i++){
                if(temp[i]!=nums[i]) check=false;
            }
            count++;
            
            if(check) return count;
             size--;
        }
        if(check) 
        return count;
        return -1;
        
//         map<int,int>mapping;
//         for(int i=0;i<nums.size();i++){
//             mapping[nums[i]]=i;
//         }
//         int diff=-1;
//         int k=0;
//         for(auto i : mapping){
//             if(diff==-1){
//                 diff=abs(k-i.second);
               
                
//             }else{
//                 if(diff!=abs(i.second-k)) return -1;
//             }
//             k++;
//         }
//         return diff;
    }
};
