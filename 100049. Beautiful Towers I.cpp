class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        long long maxi=-1;
        long long maxiIndex=-1;
       
        for(int i=0;i<maxHeights.size();i++){
            if(maxi<maxHeights[i]){
                maxi=maxHeights[i];
                maxiIndex=i;
            }
        }
        
        long long ans=0;
       
        for(int i=0;i<maxHeights.size();i++){
            int prev=maxi;
            long long sum=0;
            for(int j=i;j<maxHeights.size();j++){
                if(prev<=maxHeights[j]) sum+=prev;
                else {
                    prev=maxHeights[j];
                    sum+=maxHeights[j];
                }
            }
            prev=maxi;
            for(int j=i-1;j>=0;j--){
                if(prev<=maxHeights[j]) sum+=prev;
                else {
                    prev=maxHeights[j];
                    sum+=maxHeights[j];
                }
            }
            ans=max(ans,sum);
        }
        
       
        return ans;
    }
};
