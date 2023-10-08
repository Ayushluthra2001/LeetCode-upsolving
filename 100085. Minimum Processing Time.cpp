class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.rbegin(),tasks.rend());
        int ans=-1;
        int k=0;
        for(int i=0;i<processorTime.size();i++){
            int maxi=INT_MIN;
            for(int j=k;j<k+4;j++){
                maxi=max(processorTime[i]+tasks[j],maxi);
            }
            k+=4;
            ans=max(ans,maxi);
        }
        return ans;
    }
};
