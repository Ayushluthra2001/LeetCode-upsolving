class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>mergedIntervals;
        mergedIntervals.push_back(intervals[0]);
        for(int i =1; i<intervals.size(); i++){
            int backMax = mergedIntervals[mergedIntervals.size()-1][1];
            int currMin = intervals[i][0];

            if(backMax >= currMin){
                int mini = mergedIntervals[mergedIntervals.size()-1][0];
                int maxi = max(intervals[i][1],backMax);
                mergedIntervals[mergedIntervals.size()-1] = {mini,maxi};
            }else{
                mergedIntervals.push_back(intervals[i]);
            }
        }
         long long totalTime = 0;

        for (auto v : mergedIntervals) {
            totalTime += 1LL * (v[1] - v[0] + 1);
        }

        long long mbn = (brightness + 2) / 3;

        return mbn * totalTime;
        return 0;
    }
};©leetcode
