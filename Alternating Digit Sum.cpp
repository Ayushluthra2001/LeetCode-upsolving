class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>ans;
        int temp=n;
        while(temp>0){
            ans.push_back(temp%10);
            temp=temp/10;
        }
        int sum=ans[ans.size()-1];
        bool check=false;
        for(int i=ans.size()-2;i>=0;i--){
            if(!check){
                sum+=1*-ans[i];
                check=true;
            }else{
                sum+=ans[i];
                check=false;
            }
        }
        return sum;
    }
};
