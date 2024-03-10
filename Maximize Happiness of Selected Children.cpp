class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
         sort(happiness.begin(),happiness.end());
        long long  ans = 0;        int a = 0;
        for(int i = happiness.size()-1;i>=0;i--){            
            ans+=max(0, happiness[i]-a);
            a++;            
            if(a>=k)break;  
        }
                return ans;
    }
    
};
