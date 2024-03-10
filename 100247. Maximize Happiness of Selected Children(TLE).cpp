class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
         sort(happiness.begin(),happiness.end(),greater<int>());
        if(k==1)  return happiness[0];
        
    
        while(k>0){
            sort(happiness.begin(),happiness.end(),greater<int>());
            
            sum+=happiness[0];
            happiness[0]=-1;
            for(int i=1;i<happiness.size();i++){
                if(happiness[i]!=-1){
                    if(happiness[i]==0) return sum;
                    else happiness[i]--;
                }
            }
            k--;
        }
        return sum;
    }
};
