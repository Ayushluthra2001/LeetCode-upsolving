

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() <= 1) return intervals;
        
       
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        
        for (int i = 1; i < intervals.size(); i++) {
            if (merged.back()[1] >= intervals[i][0]) {
                
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            } else {
                
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }

    int countDays(int days, vector<vector<int>>& meetings) {
        
        vector<vector<int>> mergedMeetings = merge(meetings);

        
        int freeDays = 0;
        int previousEnd = 0;

        for ( auto interval : mergedMeetings) {
          
            if (interval[0] > previousEnd + 1) {
                freeDays += (interval[0] - previousEnd - 1);
            }
           
            previousEnd = interval[1];
        }

       
        if (previousEnd < days) {
            freeDays += (days - previousEnd);
        }

        return freeDays;
    }
};
