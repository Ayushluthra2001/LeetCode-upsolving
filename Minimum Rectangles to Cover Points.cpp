class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(),points.end());
        int count=0;
        int i=0;
        while(i<points.size()){
            int j=i+1;
            while(j<points.size() && points[j][0]-points[i][0]<=w)j++;
            
            
           
            if(j>=points.size()) count++;
            else count++;
            i=j;
        }
        return count;
    }
};
