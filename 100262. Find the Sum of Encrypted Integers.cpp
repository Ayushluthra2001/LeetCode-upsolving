class Solution {
public:
    int solve(int curr){
        string temp=to_string(curr);
        int maxi=0;
        char maxii=0;
        for(int i=0;i<temp.length();i++){
            if(maxi<temp[i]-'0'){
                maxi=temp[i]-'0';
                maxii=temp[i];
            }
            
        }
       
        for(int i=0;i<temp.length();i++){
            temp[i]=maxii;
        }
       // cout<<temp.length()<<endl;
       // cout<<temp<<endl;
        if(temp.length()>0)
        return stoi(temp);
        return 0;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
       int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=solve(nums[i]);
        }
        return sum;
    }
};
